#pragma once

#include "quantum.h"

#define KEYMAP( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013,       \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112,       K114, \
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211,             K214, \
	K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310,                   K314, \
	K400, K401, K402,             K405,             K408, K409, K410,       K412  \
) { \
	{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  KC_NO }, \
	{ K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  KC_NO, K114 }, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  KC_NO, KC_NO, K214 }, \
	{ K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  KC_NO, KC_NO, KC_NO, K314 }, \
	{ K400,  K401,  K402,  KC_NO, KC_NO, K405,  KC_NO, KC_NO, K408,  K409,  K410,  KC_NO, K412,  KC_NO, KC_NO }  \
}
