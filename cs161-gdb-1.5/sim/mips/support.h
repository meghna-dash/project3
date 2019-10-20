/* This file is part of GDB.

   Copyright 2002 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
 
   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.

   --

   This file was generated by the program igen */

#ifndef SUPPORT_H
#define SUPPORT_H

#define SD sd
#define CPU (STATE_CPU (sd, 0))
#define CPU_ sd
#define CIA_ cia
#define CIA cia
#define NIA nia

#define SD_ CPU_, CIA_, MY_INDEX
#define _SD SD_ /* deprecated */

INLINE_SUPPORT\
(instruction_address) semantic_illegal
(SIM_DESC sd,
 instruction_address cia);

INLINE_SUPPORT\
(address_word) delayslot32
(SIM_DESC sd, instruction_address cia, int MY_INDEX, address_word target);

INLINE_SUPPORT\
(address_word) nullify_next_insn32
(SIM_DESC sd, instruction_address cia, int MY_INDEX);

INLINE_SUPPORT\
(address_word) loadstore_ea
(SIM_DESC sd, instruction_address cia, int MY_INDEX, address_word base, address_word offset);

INLINE_SUPPORT\
(int) not_word_value
(SIM_DESC sd, instruction_address cia, int MY_INDEX, unsigned_word value);

INLINE_SUPPORT\
(void) unpredictable
(SIM_DESC sd, instruction_address cia, int MY_INDEX);

INLINE_SUPPORT\
(int) check_mf_cycles
(SIM_DESC sd, instruction_address cia, int MY_INDEX, hilo_history *history, signed64 time, const char *new);

INLINE_SUPPORT\
(int) check_mt_hilo
(SIM_DESC sd, instruction_address cia, int MY_INDEX, hilo_history *history);

INLINE_SUPPORT\
(int) check_mf_hilo
(SIM_DESC sd, instruction_address cia, int MY_INDEX, hilo_history *history, hilo_history *peer);

INLINE_SUPPORT\
(int) check_mult_hilo
(SIM_DESC sd, instruction_address cia, int MY_INDEX, hilo_history *hi, hilo_history *lo);

INLINE_SUPPORT\
(int) check_div_hilo
(SIM_DESC sd, instruction_address cia, int MY_INDEX, hilo_history *hi, hilo_history *lo);

INLINE_SUPPORT\
(void) check_u64
(SIM_DESC sd, instruction_address cia, int MY_INDEX, instruction_word insn);

INLINE_SUPPORT\
(void) do_addiu
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rs, int rt, unsigned16 immediate);

INLINE_SUPPORT\
(void) do_addu
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rs, int rt, int rd);

INLINE_SUPPORT\
(void) do_and
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rs, int rt, int rd);

INLINE_SUPPORT\
(void) do_daddiu
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rs, int rt, unsigned16 immediate);

INLINE_SUPPORT\
(void) do_daddu
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rs, int rt, int rd);

INLINE_SUPPORT\
(void) do_ddiv
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rs, int rt);

INLINE_SUPPORT\
(void) do_ddivu
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rs, int rt);

INLINE_SUPPORT\
(void) do_div
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rs, int rt);

INLINE_SUPPORT\
(void) do_divu
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rs, int rt);

INLINE_SUPPORT\
(void) do_dmultx
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rs, int rt, int rd, int signed_p);

INLINE_SUPPORT\
(void) do_dmult
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rs, int rt, int rd);

INLINE_SUPPORT\
(void) do_dmultu
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rs, int rt, int rd);

INLINE_SUPPORT\
(unsigned64) do_dror
(SIM_DESC sd, instruction_address cia, int MY_INDEX, unsigned64 x,unsigned64 y);

INLINE_SUPPORT\
(void) do_dsll
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rt, int rd, int shift);

INLINE_SUPPORT\
(void) do_dsllv
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rs, int rt, int rd);

INLINE_SUPPORT\
(void) do_dsra
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rt, int rd, int shift);

INLINE_SUPPORT\
(void) do_dsrav
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rs, int rt, int rd);

INLINE_SUPPORT\
(void) do_dsrl
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rt, int rd, int shift);

INLINE_SUPPORT\
(void) do_dsrlv
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rs, int rt, int rd);

INLINE_SUPPORT\
(void) do_dsubu
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rs, int rt, int rd);

INLINE_SUPPORT\
(unsigned_word) do_load
(SIM_DESC sd, instruction_address cia, int MY_INDEX, unsigned access, address_word base, address_word offset);

INLINE_SUPPORT\
(unsigned_word) do_load_left
(SIM_DESC sd, instruction_address cia, int MY_INDEX, unsigned access, address_word base, address_word offset, unsigned_word rt);

INLINE_SUPPORT\
(unsigned_word) do_load_right
(SIM_DESC sd, instruction_address cia, int MY_INDEX, unsigned access, address_word base, address_word offset, unsigned_word rt);

INLINE_SUPPORT\
(void) do_mfhi
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rd);

INLINE_SUPPORT\
(void) do_mflo
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rd);

INLINE_SUPPORT\
(void) do_mult
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rs, int rt, int rd);

INLINE_SUPPORT\
(void) do_multu
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rs, int rt, int rd);

INLINE_SUPPORT\
(void) do_nor
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rs, int rt, int rd);

INLINE_SUPPORT\
(void) do_or
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rs, int rt, int rd);

INLINE_SUPPORT\
(void) do_ori
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rs, int rt, unsigned immediate);

INLINE_SUPPORT\
(unsigned64) do_ror
(SIM_DESC sd, instruction_address cia, int MY_INDEX, unsigned32 x,unsigned32 y);

INLINE_SUPPORT\
(void) do_store
(SIM_DESC sd, instruction_address cia, int MY_INDEX, unsigned access, address_word base, address_word offset, unsigned_word word);

INLINE_SUPPORT\
(void) do_store_left
(SIM_DESC sd, instruction_address cia, int MY_INDEX, unsigned access, address_word base, address_word offset, unsigned_word rt);

INLINE_SUPPORT\
(void) do_store_right
(SIM_DESC sd, instruction_address cia, int MY_INDEX, unsigned access, address_word base, address_word offset, unsigned_word rt);

INLINE_SUPPORT\
(void) do_sll
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rt, int rd, int shift);

INLINE_SUPPORT\
(void) do_sllv
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rs, int rt, int rd);

INLINE_SUPPORT\
(void) do_slt
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rs, int rt, int rd);

INLINE_SUPPORT\
(void) do_slti
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rs, int rt, unsigned16 immediate);

INLINE_SUPPORT\
(void) do_sltiu
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rs, int rt, unsigned16 immediate);

INLINE_SUPPORT\
(void) do_sltu
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rs, int rt, int rd);

INLINE_SUPPORT\
(void) do_sra
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rt, int rd, int shift);

INLINE_SUPPORT\
(void) do_srav
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rs, int rt, int rd);

INLINE_SUPPORT\
(void) do_srl
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rt, int rd, int shift);

INLINE_SUPPORT\
(void) do_srlv
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rs, int rt, int rd);

INLINE_SUPPORT\
(void) do_subu
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rs, int rt, int rd);

INLINE_SUPPORT\
(void) do_xor
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rs, int rt, int rd);

INLINE_SUPPORT\
(void) do_xori
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rs, int rt, unsigned16 immediate);

INLINE_SUPPORT\
(const char *) str_FMT
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int fmt);

INLINE_SUPPORT\
(const char *) str_TF
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int tf);

INLINE_SUPPORT\
(const char *) str_ND
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int nd);

INLINE_SUPPORT\
(const char *) str_COND
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int cond);

INLINE_SUPPORT\
(void) check_fmt_p
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int fmt, instruction_word insn);

INLINE_SUPPORT\
(void) check_fpu
(SIM_DESC sd, instruction_address cia, int MY_INDEX);

INLINE_SUPPORT\
(address_word) delayslot16
(SIM_DESC sd, instruction_address cia, int MY_INDEX, address_word nia, address_word target);

INLINE_SUPPORT\
(address_word) basepc
(SIM_DESC sd, instruction_address cia, int MY_INDEX);

INLINE_SUPPORT\
(void) do_save
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int xsregs, int aregs, int ras0s1, int framesize);

INLINE_SUPPORT\
(const char *) str_MFHI
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int hi);

INLINE_SUPPORT\
(const char *) str_SAT
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int s);

INLINE_SUPPORT\
(const char *) str_UNS
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int u);

INLINE_SUPPORT\
(void) do_vr_mul_op
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rd, int rs, int rt, int accumulate_p, int store_hi_p, int unsigned_p, int saturate_p, int subtract_p, int short_p, int double_p);

INLINE_SUPPORT\
(void) do_ph_op
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rd, int rs, int rt, int op, int sat);

INLINE_SUPPORT\
(void) do_w_op
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rd, int rs, int rt, int op);

INLINE_SUPPORT\
(void) do_qb_op
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rd, int rs, int rt, int op, int sat);

INLINE_SUPPORT\
(void) do_qb_shift
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rd, int rt, int shift, int op);

INLINE_SUPPORT\
(void) do_ph_shift
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rd, int rt, int shift, int op, int sat);

INLINE_SUPPORT\
(void) do_w_shll
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rd, int rt, int shift);

INLINE_SUPPORT\
(void) do_w_shra
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rd, int rt, int shift);

INLINE_SUPPORT\
(void) do_qb_muleu
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rd, int rs, int rt, int loc);

INLINE_SUPPORT\
(void) do_ph_muleq
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rd, int rs, int rt, int loc);

INLINE_SUPPORT\
(void) do_qb_dot_product
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int ac, int rs, int rt, int op, int loc);

INLINE_SUPPORT\
(void) do_ph_dot_product
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int ac, int rs, int rt, int op);

INLINE_SUPPORT\
(void) do_w_dot_product
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int ac, int rs, int rt, int op);

INLINE_SUPPORT\
(void) do_ph_maq
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int ac, int rs, int rt, int op, int loc);

INLINE_SUPPORT\
(void) do_qb_cmpu
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rs, int rt, int op);

INLINE_SUPPORT\
(void) do_qb_cmpgu
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rd, int rs, int rt, int op);

INLINE_SUPPORT\
(void) do_ph_cmpu
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rs, int rt, int op);

INLINE_SUPPORT\
(void) do_w_extr
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rt, int ac, int shift, int op);

INLINE_SUPPORT\
(void) do_h_extr
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rt, int ac, int shift);

INLINE_SUPPORT\
(void) do_extp
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int rt, int ac, int size, int op);

INLINE_SUPPORT\
(void) do_shilo
(SIM_DESC sd, instruction_address cia, int MY_INDEX, int ac, int shift);


#if defined(SUPPORT_INLINE)
# if ((SUPPORT_INLINE & INCLUDE_MODULE)\
      && (SUPPORT_INLINE & INCLUDED_BY_MODULE))
#  include "support.c"
# endif
#endif

#endif /* _SUPPORT_H_*/