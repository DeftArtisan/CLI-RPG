#pragma once
#pragma warning(disable:6011)
#pragma warning(disable:6308)
#pragma warning(disable:28182)
#ifndef  SRC_LINKED_LISt_H_
#define SRC_LINKED_LIST_H_
#endif 


#include "definitive.h"
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <string.h>



typedef struct linked_list {
	_generic _node_l;
	__generic _dimensio_ptr;
	size_t cont_capac;
	size_t _sz_d;
}linked_list;


extern linked_list* __attribute__((malloc)) _allocative_linl(size_t init_sz) {
	linked_list* receptive_v = (linked_list*)_allocative_(sizeof(linked_list));
	_assert_(receptive_v != NULL);
	if (!(init_sz <= _min_all)) { receptive_v->_dimensio_ptr = (__ptr_char16)_allocative_(sizeof(_ptr_char16) * init_sz); receptive_v->_sz_d = 0; receptive_v->_node_l = NULL; receptive_v->cont_capac = init_sz; }
	//for (size_t d = 0; d < receptive_v->_sz_d; ++d) { *(_ptr_char16)(receptive_v->_dimensio_ptr + d) = (_ptr_char16)_constructive_(sizeof(char16) * 10); };
	return &*(receptive_v);
}

extern inline void _deallocative_linl(struct linked_list* _receptive) {
	_assert_(!(_receptive == NULL) && !(_receptive->_dimensio_ptr == NULL));
	//for (size_t f = 0; !(*((_ptr_char16*)_receptive->_dimensio_ptr + f) == 0); ++f) multi-dim method
	for (size_t s = 0; s < _receptive->_sz_d; ++s) { (_receptive->_dimensio_ptr + s); }
	//_deallocative_(_receptive->_dimensio_ptr);
	_deallocative_(_receptive);
}

static inline _bool_ _precedence_factr(_generic facti_i, _generic _decor_m) {
	return strlen((_ptr_char16)(facti_i)) > strlen((_ptr_char16)(_decor_m));
}

extern inline _bool_ __attribute__((unused)) put_by_natural(struct linked_list* _receptive, _generic genic_i, _generic mapped_inp) {
	_assert_(!(_receptive == NULL) && !(_receptive->_dimensio_ptr == NULL) && !(genic_i == NULL) && !(mapped_inp == NULL));
	register size_t _decal = 0;
	//duplication prevention(stack-wise)
	for (size_t a = 0; a < _receptive->_sz_d; ++a) {
		if (*((_ptr_char16)_receptive->_dimensio_ptr + a) == *((_ptr_char16)genic_i + 0)) {
			register int32 cnt_dup = 0;
			for (size_t g = 0; g < _int_maximisized && (*(_ptr_char16)(*((__ptr_char16)(_receptive->_dimensio_ptr + a)) + g) == '\0' || g <= strlen((_ptr_char16)(genic_i))); ++g) {
				if (*(_ptr_char16)(*((__ptr_char16)(_receptive->_dimensio_ptr + a)) + g) == *((_ptr_char16)(genic_i)+g)) {
					cnt_dup++;
					if (cnt_dup == (strlen((_ptr_char16)(genic_i)) - 1 || strlen(*((_ptr_char16)(_receptive->_dimensio_ptr + a))) - 1)) {
						register tmp_sz = strlen(*((_ptr_char16)(_receptive->_dimensio_ptr + a)));
						//reallocation of a column
						*(_ptr_char16)(_receptive->_dimensio_ptr + a) = (_ptr_char16)_reallocative_((_ptr_char16)(_receptive->_dimensio_ptr + a), strlen((_ptr_char16)mapped_inp) + 1);
                        for (size_t fc_rl = tmp_sz; fc_rl < ((tmp_sz + strlen((_ptr_char16)mapped_inp) + 1)); ++fc_rl) {
							//null termination
							if (fc_rl == strlen((_ptr_char16)mapped_inp)) { *(_ptr_char16)(*((__ptr_char16)(_receptive->_dimensio_ptr + a)) + fc_rl) = '\0'; break; }
							*(_ptr_char16)(*((__ptr_char16)(_receptive->_dimensio_ptr + a)) + fc_rl) = *((_ptr_char16)(mapped_inp) + fc_rl);
                        }
					}
				}
			}
		}
	}

	while (!(*((__ptr_char16)_receptive->_dimensio_ptr + _decal) == '\0')) { _decal++; }
	_receptive->cont_capac = _decal;
	if (!(_receptive->_sz_d < _receptive->cont_capac)) { ((__ptr_char16)_receptive->_dimensio_ptr = (__ptr_char16)_reallocative_((__ptr_char16)_receptive->_dimensio_ptr, _receptive->cont_capac * 2)); }
	for (size_t d_c = 0; true ; ++d_c) {
			//(_ptr_char16)_receptive->_dimensio_ptr + 1 = (_ptr_char16)_allocative_(sizeof(char16) * d_c
			//while (!(*(__ptr_char16)_receptive->_dimensio_ptr + c_k == (char16)0)) { c_k++; }
		     _receptive->_sz_d++;
			 _assert_(!(strlen((_ptr_char16)mapped_inp) == 0));
			*(_receptive->_dimensio_ptr + _receptive->_sz_d - 1) = (_ptr_char16)_allocative_(sizeof(char16) * ((strlen((_ptr_char16)genic_i) + 1) + strlen((_ptr_char16)mapped_inp) + 1)); //null-terminator
			//when outputting the string dereferencing is unnecessary in the printf() arguments i.e (_ptr_char16)genic_i
			//printf("%c\n", *((_ptr_char16)genic_i + 4));
			//key-insertion(natural)
			for (size_t g_c = 0; g_c < strlen((_ptr_char16)genic_i); ++g_c) {
				//(*(_ptr_char16)(*(__ptr_char16)_receptive->_dimensio_ptr + 1) + g_c) = *(_ptr_char16)genic_i + 
				_assert_(!(*(*(__ptr_char16)(_receptive->_dimensio_ptr + _receptive->_sz_d - 1) + g_c)) == NULL);
				*(_ptr_char16)(*(__ptr_char16)(_receptive->_dimensio_ptr + _receptive->_sz_d - 1) + g_c) = *((_ptr_char16)genic_i + g_c);
				printf("%c", *(_ptr_char16)(*(__ptr_char16)(_receptive->_dimensio_ptr + _receptive->_sz_d - 1) + g_c));
				//printf("%c", *(_ptr_char16)(*(__ptr_char16)(_receptive->_dimensio_ptr + 8) + g_c));
			}
			//mull-termination appending
			*(_ptr_char16)(*(__ptr_char16)(_receptive->_dimensio_ptr + _receptive->_sz_d - 1) + strlen((_ptr_char16)genic_i)) = '\0';
			printf("%c", *(_ptr_char16)(*(__ptr_char16)(_receptive->_dimensio_ptr + _receptive->_sz_d - 1) + strlen((_ptr_char16)genic_i)));
			printf("\n");
			if (!(_receptive->_sz_d <= _min_linl)) _receptive->_node_l = &*(_ptr_char16)_receptive->_dimensio_ptr - _receptive->_sz_d - 1; //previous_node
			
			//append value to new key
			for (size_t d = *((_ptr_char16)(_receptive->_dimensio_ptr + _receptive->_sz_d - 1)), b_cnt = 0; d < (*((_ptr_char16)(_receptive->_dimensio_ptr + _receptive->_sz_d - 1)) + strlen((_ptr_char16)mapped_inp) + 1); ++d, ++b_cnt) {
				if (d == strlen((_ptr_char16)mapped_inp)) { *(_ptr_char16)(*((__ptr_char16)(_receptive->_dimensio_ptr + _receptive->_sz_d - 1)) + d) = '\0'; break; }
				*(_ptr_char16)(*((__ptr_char16)(_receptive->_dimensio_ptr + _receptive->_sz_d - 1)) + d) = *((_ptr_char16)(mapped_inp) + b_cnt);
			}
			
			break;
	}
	/*
		int g = 0; //g_l recep 

	for (s = 0; s < 10; ++s) {
		if (s == 1) { g = arr[s]; arr[s] = gen; continue; 
		int s = arr[s]; //temp recep;
		arr[s] = g;//assignation of the value prior
		g = arr[s];//storing temp for subsequent iteration
	}
	
	*/
	return true;
}
