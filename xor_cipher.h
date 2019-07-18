/**
** Author: Firmesh Team
** K2015 Fetel
** Khuu Minh Hue
** Luong Hoang Duy
** Dinh The Sang
** Van Ngoc Thien
** Date release: 15/07/2019
**/

#ifndef XOR_CIPHER_H
#define XOR_CIPHER_H

/* XOR Cipher default key*/
static uint16 xor_key = 0x1234;

uint16 xor_encrypt(uint16 data) {
	return data ^ xor_key;
}

uint16 xor_decrypt(uint16 data) {
	return data ^ xor_key;
}

#endif
