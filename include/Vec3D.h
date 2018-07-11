#ifndef VEC3D
#define VEC3D
#include <cmath>
#include <iostream>

template <typename T>
class Vec3D {
public:
	T vector[3];

	inline Vec3D(void) {
		vector[0] = vector[1] = vector[2] = T();
	};
	inline Vec3D(T i_x, T i_y, T i_z) {
		vector[0] = i_x;
		vector[1] = i_y;
		vector[2] = i_z;
	};
	inline Vec3D(T i_x, T i_z) {
		vector[0] = i_x;
		vector[1] = i_z;
		vector[2] = 1;
	};

	inline Vec3D<T> copy() {
		return Vec3D<T>(vector[0], vector[1], vector[2]);
	}

	// ---------
	// Operators
	// ---------
	inline T& operator[] (int i_index) {
		return (vector[i_index]);
	};
	inline const T& operator[] (int i_index) const {
		return (vector[i_index]);
	};
	inline Vec3D& operator= (const Vec3D & i_vec3D) {
		vector[0] = i_vec3D[0];
		vector[1] = i_vec3D[1];
		vector[2] = i_vec3D[2];
		return (*this);
	};
	inline Vec3D& operator+= (const Vec3D & i_vec3D) {
		vector[0] += i_vec3D[0];
		vector[1] += i_vec3D[1];
		vector[2] += i_vec3D[2];
		return (*this);
	};
	inline Vec3D& operator-= (const Vec3D & i_vec3D) {
		vector[0] -= i_vec3D[0];
		vector[1] -= i_vec3D[1];
		vector[2] -= i_vec3D[2];
		return (*this);
	};
	inline Vec3D& operator*= (const Vec3D & i_vec3D) {
		vector[0] *= i_vec3D[0];
		vector[1] *= i_vec3D[1];
		vector[2] *= i_vec3D[2];
		return (*this);
	};
	inline Vec3D& operator*= (T i_multiplier) {
		vector[0] *= i_multiplier;
		vector[1] *= i_multiplier;
		vector[2] *= i_multiplier;
		return (*this);
	};
	inline Vec3D& operator/= (const Vec3D & i_vec3D) {
		vector[0] /= i_vec3D[0];
		vector[1] /= i_vec3D[1];
		vector[2] /= i_vec3D[2];
		return (*this);
	};
	inline Vec3D& operator/= (T i_vec3D) {
		vector[0] /= i_vec3D;
		vector[1] /= i_vec3D;
		vector[2] /= i_vec3D;
		return (*this);
	};

	inline bool& operator!= (const Vec3D<T> & i_comparer) {
		return (vector[0] != i_comparer[0] || vector[1] != i_comparer[1] || vector[2] != i_comparer[2]);
	}

	inline Vec3D& operator* (const Vec3D<T> & i_multiplier) {
		return Vec3D(vector[0] * i_multiplier[0], vector[1] * i_multiplier[1], vector[2] * i_multiplier[2]);
	}
	inline Vec3D& operator* (const float & i_multiplier) {
		return Vec3D(vector[0] * i_multiplier, vector[1] * i_multiplier, vector[2] * i_multiplier);
	}

	inline Vec3D& operator+ (const  Vec3D<T> & i_addition) {
		return Vec3D(vector[0] + i_addition[0], vector[1] + i_addition[1], vector[2] + i_addition[2]);
	}
	
	inline Vec3D& operator+ (const float & i_addition) {
		return Vec3D(vector[0] + i_addition, vector[1] + i_addition, vector[2] + i_addition);
	}

	inline Vec3D& operator- (const  Vec3D<T> & i_substraction) {
		return Vec3D(vector[0] - i_substraction[0], vector[1] - i_substraction[1], vector[2] - i_substraction[2]);
	}

	inline Vec3D& operator- () {
		return Vec3D(-vector[0], -vector[1], -vector[2]);
	}

	inline Vec3D& operator/ (const float & i_divisor) {
		return Vec3D(vector[0] / i_divisor, vector[1] / i_divisor, vector[2] / i_divisor);
	}

	inline bool operator== (const Vec3D<T> i_comparer) {
		return (vector[0] == i_comparer[0] && vector[1] == i_comparer[1] && vector[2] == i_comparer[2]);
	}

	inline bool operator < (const Vec3D<T> i_comparer) {
		return (vector[0] < i_comparer[0] && vector[1] < i_comparer[1] && vector[2] < i_comparer[2]);
	}
	inline bool operator <= (const Vec3D<T> i_comparer) {
		return (vector[0] <= i_comparer[0] && vector[1] <= i_comparer[1] && vector[2] <= i_comparer[2]);
	}

	inline bool operator > (const Vec3D<T> i_comparer) {
		return (vector[0] > i_comparer[0] && vector[1] > i_comparer[1] && vector[2] > i_comparer[2]);
	}
	inline bool operator >= (const Vec3D<T> i_comparer) {
		return (vector[0] >= i_comparer[0] && vector[1] >= i_comparer[1] && vector[2] >= i_comparer[2]);
	}
};

template <class T> std::ostream & operator<< (std::ostream & ostream, const Vec3D<T> & vector) {
	ostream << "[ " << vector[0] << ", " << vector[1] << ", " << vector[2] << " ]";
	return output;
}

typedef Vec3D<float> Direction;
typedef Vec3D<float> Size;
typedef Vec3D<float> Position;
typedef Vec3D<float> DrawSize;
typedef Vec3D<float> DrawPosition;
typedef Vec3D<float> Color;
#endif