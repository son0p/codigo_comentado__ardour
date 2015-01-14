/*
 * Copyright (C) 2014 Robin Gareus <robin@gareus.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef __libbackend_dummy_midi_seq_h__
#define __libbackend_dummy_midi_seq_h__

#include "dummy_audiobackend.h"

namespace ARDOUR { namespace DummyMidiData {

static const MIDISequence s0[] = { // some arbitrary short sequence
	{ 0.00, 3, {0x90,  64, 0x7f} },
	{ 0.50, 3, {0x80,  64, 0x00} },
	{ 1.00, 3, {0x90,  66, 0x7f} },
	{ 1.50, 3, {0x80,  66, 0x00} },
	{ 2.00, 3, {0x90,  68, 0x7f} },
	{ 3.50, 3, {0x80,  68, 0x00} },
	{ 3.75, 3, {0x90,  71, 0x7f} },
	{ 4.00, 3, {0x80,  71, 0x00} },
	{ 4.00, 3, {0xff, 255, 0xff} }, // sentinel
};

static const MIDISequence s1[] = {  // Cmaj7 - iterate all channels
	{ 0.00, 3, {0x90,  60, 0x7f} },
	{ 0.25, 3, {0x90,  64, 0x7f} },
	{ 0.50, 3, {0x90,  67, 0x7f} },
	{ 0.75, 3, {0x90,  71, 0x7f} },
	{ 1.00, 3, {0x90,  72, 0x7f} },
	{ 1.00, 3, {0x80,  60, 0x00} },
	{ 1.25, 3, {0x80,  64, 0x00} },
	{ 1.50, 3, {0x80,  67, 0x00} },
	{ 1.75, 3, {0x80,  71, 0x00} },
	{ 2.00, 3, {0x80,  72, 0x00} },
	{ 2.00, 3, {0x91,  60, 0x7f} },
	{ 2.25, 3, {0x91,  64, 0x7f} },
	{ 2.50, 3, {0x91,  67, 0x7f} },
	{ 2.75, 3, {0x91,  71, 0x7f} },
	{ 3.00, 3, {0x91,  72, 0x7f} },
	{ 3.00, 3, {0x81,  60, 0x00} },
	{ 3.25, 3, {0x81,  64, 0x00} },
	{ 3.50, 3, {0x81,  67, 0x00} },
	{ 3.75, 3, {0x81,  71, 0x00} },
	{ 4.00, 3, {0x81,  72, 0x00} },
	{ 4.00, 3, {0x92,  60, 0x7f} },
	{ 4.25, 3, {0x92,  64, 0x7f} },
	{ 4.50, 3, {0x92,  67, 0x7f} },
	{ 4.75, 3, {0x92,  71, 0x7f} },
	{ 5.00, 3, {0x92,  72, 0x7f} },
	{ 5.00, 3, {0x82,  60, 0x00} },
	{ 5.25, 3, {0x82,  64, 0x00} },
	{ 5.50, 3, {0x82,  67, 0x00} },
	{ 5.75, 3, {0x82,  71, 0x00} },
	{ 6.00, 3, {0x82,  72, 0x00} },
	{ 6.00, 3, {0x93,  60, 0x7f} },
	{ 6.25, 3, {0x93,  64, 0x7f} },
	{ 6.50, 3, {0x93,  67, 0x7f} },
	{ 6.75, 3, {0x93,  71, 0x7f} },
	{ 7.00, 3, {0x93,  72, 0x7f} },
	{ 7.00, 3, {0x83,  60, 0x00} },
	{ 7.25, 3, {0x83,  64, 0x00} },
	{ 7.50, 3, {0x83,  67, 0x00} },
	{ 7.75, 3, {0x83,  71, 0x00} },
	{ 8.00, 3, {0x83,  72, 0x00} },
	{ 8.00, 3, {0x94,  60, 0x7f} },
	{ 8.25, 3, {0x94,  64, 0x7f} },
	{ 8.50, 3, {0x94,  67, 0x7f} },
	{ 8.75, 3, {0x94,  71, 0x7f} },
	{ 9.00, 3, {0x94,  72, 0x7f} },
	{ 9.00, 3, {0x84,  60, 0x00} },
	{ 9.25, 3, {0x84,  64, 0x00} },
	{ 9.50, 3, {0x84,  67, 0x00} },
	{ 9.75, 3, {0x84,  71, 0x00} },
	{10.00, 3, {0x84,  72, 0x00} },
	{10.00, 3, {0x95,  60, 0x7f} },
	{10.25, 3, {0x95,  64, 0x7f} },
	{10.50, 3, {0x95,  67, 0x7f} },
	{10.75, 3, {0x95,  71, 0x7f} },
	{11.00, 3, {0x95,  72, 0x7f} },
	{11.00, 3, {0x85,  60, 0x00} },
	{11.25, 3, {0x85,  64, 0x00} },
	{11.50, 3, {0x85,  67, 0x00} },
	{11.75, 3, {0x85,  71, 0x00} },
	{12.00, 3, {0x85,  72, 0x00} },
	{12.00, 3, {0x96,  60, 0x7f} },
	{12.25, 3, {0x96,  64, 0x7f} },
	{12.50, 3, {0x96,  67, 0x7f} },
	{12.75, 3, {0x96,  71, 0x7f} },
	{13.00, 3, {0x96,  72, 0x7f} },
	{13.00, 3, {0x86,  60, 0x00} },
	{13.25, 3, {0x86,  64, 0x00} },
	{13.50, 3, {0x86,  67, 0x00} },
	{13.75, 3, {0x86,  71, 0x00} },
	{14.00, 3, {0x86,  72, 0x00} },
	{14.00, 3, {0x97,  60, 0x7f} },
	{14.25, 3, {0x97,  64, 0x7f} },
	{14.50, 3, {0x97,  67, 0x7f} },
	{14.75, 3, {0x97,  71, 0x7f} },
	{15.00, 3, {0x97,  72, 0x7f} },
	{15.00, 3, {0x87,  60, 0x00} },
	{15.25, 3, {0x87,  64, 0x00} },
	{15.50, 3, {0x87,  67, 0x00} },
	{15.75, 3, {0x87,  71, 0x00} },
	{16.00, 3, {0x87,  72, 0x00} },
	{16.00, 3, {0x98,  60, 0x7f} },
	{16.25, 3, {0x98,  64, 0x7f} },
	{16.50, 3, {0x98,  67, 0x7f} },
	{16.75, 3, {0x98,  71, 0x7f} },
	{17.00, 3, {0x98,  72, 0x7f} },
	{17.00, 3, {0x88,  60, 0x00} },
	{17.25, 3, {0x88,  64, 0x00} },
	{17.50, 3, {0x88,  67, 0x00} },
	{17.75, 3, {0x88,  71, 0x00} },
	{18.00, 3, {0x88,  72, 0x00} },
	{18.00, 3, {0x99,  60, 0x7f} },
	{18.25, 3, {0x99,  64, 0x7f} },
	{18.50, 3, {0x99,  67, 0x7f} },
	{18.75, 3, {0x99,  71, 0x7f} },
	{19.00, 3, {0x99,  72, 0x7f} },
	{19.00, 3, {0x89,  60, 0x00} },
	{19.25, 3, {0x89,  64, 0x00} },
	{19.50, 3, {0x89,  67, 0x00} },
	{19.75, 3, {0x89,  71, 0x00} },
	{20.00, 3, {0x89,  72, 0x00} },
	{20.00, 3, {0x9a,  60, 0x7f} },
	{20.25, 3, {0x9a,  64, 0x7f} },
	{20.50, 3, {0x9a,  67, 0x7f} },
	{20.75, 3, {0x9a,  71, 0x7f} },
	{21.00, 3, {0x9a,  72, 0x7f} },
	{21.00, 3, {0x8a,  60, 0x00} },
	{21.25, 3, {0x8a,  64, 0x00} },
	{21.50, 3, {0x8a,  67, 0x00} },
	{21.75, 3, {0x8a,  71, 0x00} },
	{22.00, 3, {0x8a,  72, 0x00} },
	{22.00, 3, {0x9b,  60, 0x7f} },
	{22.25, 3, {0x9b,  64, 0x7f} },
	{22.50, 3, {0x9b,  67, 0x7f} },
	{22.75, 3, {0x9b,  71, 0x7f} },
	{23.00, 3, {0x9b,  72, 0x7f} },
	{23.00, 3, {0x8b,  60, 0x00} },
	{23.25, 3, {0x8b,  64, 0x00} },
	{23.50, 3, {0x8b,  67, 0x00} },
	{23.75, 3, {0x8b,  71, 0x00} },
	{24.00, 3, {0x8b,  72, 0x00} },
	{24.00, 3, {0x9c,  60, 0x7f} },
	{24.25, 3, {0x9c,  64, 0x7f} },
	{24.50, 3, {0x9c,  67, 0x7f} },
	{24.75, 3, {0x9c,  71, 0x7f} },
	{25.00, 3, {0x9c,  72, 0x7f} },
	{25.00, 3, {0x8c,  60, 0x00} },
	{25.25, 3, {0x8c,  64, 0x00} },
	{25.50, 3, {0x8c,  67, 0x00} },
	{25.75, 3, {0x8c,  71, 0x00} },
	{26.00, 3, {0x8c,  72, 0x00} },
	{26.00, 3, {0x9d,  60, 0x7f} },
	{26.25, 3, {0x9d,  64, 0x7f} },
	{26.50, 3, {0x9d,  67, 0x7f} },
	{26.75, 3, {0x9d,  71, 0x7f} },
	{27.00, 3, {0x9d,  72, 0x7f} },
	{27.00, 3, {0x8d,  60, 0x00} },
	{27.25, 3, {0x8d,  64, 0x00} },
	{27.50, 3, {0x8d,  67, 0x00} },
	{27.75, 3, {0x8d,  71, 0x00} },
	{28.00, 3, {0x8d,  72, 0x00} },
	{28.00, 3, {0x9e,  60, 0x7f} },
	{28.25, 3, {0x9e,  64, 0x7f} },
	{28.50, 3, {0x9e,  67, 0x7f} },
	{28.75, 3, {0x9e,  71, 0x7f} },
	{29.00, 3, {0x9e,  72, 0x7f} },
	{29.00, 3, {0x8e,  60, 0x00} },
	{29.25, 3, {0x8e,  64, 0x00} },
	{29.50, 3, {0x8e,  67, 0x00} },
	{29.75, 3, {0x8e,  71, 0x00} },
	{30.00, 3, {0x8e,  72, 0x00} },
	{30.00, 3, {0x9f,  60, 0x7f} },
	{30.25, 3, {0x9f,  64, 0x7f} },
	{30.50, 3, {0x9f,  67, 0x7f} },
	{30.75, 3, {0x9f,  71, 0x7f} },
	{31.00, 3, {0x9f,  72, 0x7f} },
	{31.00, 3, {0x8f,  60, 0x00} },
	{31.25, 3, {0x8f,  64, 0x00} },
	{31.50, 3, {0x8f,  67, 0x00} },
	{31.75, 3, {0x8f,  71, 0x00} },
	{32.00, 3, {0x8f,  72, 0x00} },
	{32.00, 3, {0xff, 255, 0xff} }, // sentinel
};

static const MIDISequence s2[] = { // channel 1, sweep all notes
	{ 0.00, 3, {0x90,   0, 0x7f} },
	{ 0.25, 3, {0x80,   0, 0x00} },
	{ 0.25, 3, {0x90,   1, 0x7f} },
	{ 0.50, 3, {0x80,   1, 0x00} },
	{ 0.50, 3, {0x90,   2, 0x7f} },
	{ 0.75, 3, {0x80,   2, 0x00} },
	{ 0.75, 3, {0x90,   3, 0x7f} },
	{ 1.00, 3, {0x80,   3, 0x00} },
	{ 1.00, 3, {0x90,   4, 0x7f} },
	{ 1.25, 3, {0x80,   4, 0x00} },
	{ 1.25, 3, {0x90,   5, 0x7f} },
	{ 1.50, 3, {0x80,   5, 0x00} },
	{ 1.50, 3, {0x90,   6, 0x7f} },
	{ 1.75, 3, {0x80,   6, 0x00} },
	{ 1.75, 3, {0x90,   7, 0x7f} },
	{ 2.00, 3, {0x80,   7, 0x00} },
	{ 2.00, 3, {0x90,   8, 0x7f} },
	{ 2.25, 3, {0x80,   8, 0x00} },
	{ 2.25, 3, {0x90,   9, 0x7f} },
	{ 2.50, 3, {0x80,   9, 0x00} },
	{ 2.50, 3, {0x90,  10, 0x7f} },
	{ 2.75, 3, {0x80,  10, 0x00} },
	{ 2.75, 3, {0x90,  11, 0x7f} },
	{ 3.00, 3, {0x80,  11, 0x00} },
	{ 3.00, 3, {0x90,  12, 0x7f} },
	{ 3.25, 3, {0x80,  12, 0x00} },
	{ 3.25, 3, {0x90,  13, 0x7f} },
	{ 3.50, 3, {0x80,  13, 0x00} },
	{ 3.50, 3, {0x90,  14, 0x7f} },
	{ 3.75, 3, {0x80,  14, 0x00} },
	{ 3.75, 3, {0x90,  15, 0x7f} },
	{ 4.00, 3, {0x80,  15, 0x00} },
	{ 4.00, 3, {0x90,  16, 0x7f} },
	{ 4.25, 3, {0x80,  16, 0x00} },
	{ 4.25, 3, {0x90,  17, 0x7f} },
	{ 4.50, 3, {0x80,  17, 0x00} },
	{ 4.50, 3, {0x90,  18, 0x7f} },
	{ 4.75, 3, {0x80,  18, 0x00} },
	{ 4.75, 3, {0x90,  19, 0x7f} },
	{ 5.00, 3, {0x80,  19, 0x00} },
	{ 5.00, 3, {0x90,  20, 0x7f} },
	{ 5.25, 3, {0x80,  20, 0x00} },
	{ 5.25, 3, {0x90,  21, 0x7f} },
	{ 5.50, 3, {0x80,  21, 0x00} },
	{ 5.50, 3, {0x90,  22, 0x7f} },
	{ 5.75, 3, {0x80,  22, 0x00} },
	{ 5.75, 3, {0x90,  23, 0x7f} },
	{ 6.00, 3, {0x80,  23, 0x00} },
	{ 6.00, 3, {0x90,  24, 0x7f} },
	{ 6.25, 3, {0x80,  24, 0x00} },
	{ 6.25, 3, {0x90,  25, 0x7f} },
	{ 6.50, 3, {0x80,  25, 0x00} },
	{ 6.50, 3, {0x90,  26, 0x7f} },
	{ 6.75, 3, {0x80,  26, 0x00} },
	{ 6.75, 3, {0x90,  27, 0x7f} },
	{ 7.00, 3, {0x80,  27, 0x00} },
	{ 7.00, 3, {0x90,  28, 0x7f} },
	{ 7.25, 3, {0x80,  28, 0x00} },
	{ 7.25, 3, {0x90,  29, 0x7f} },
	{ 7.50, 3, {0x80,  29, 0x00} },
	{ 7.50, 3, {0x90,  30, 0x7f} },
	{ 7.75, 3, {0x80,  30, 0x00} },
	{ 7.75, 3, {0x90,  31, 0x7f} },
	{ 8.00, 3, {0x80,  31, 0x00} },
	{ 8.00, 3, {0x90,  32, 0x7f} },
	{ 8.25, 3, {0x80,  32, 0x00} },
	{ 8.25, 3, {0x90,  33, 0x7f} },
	{ 8.50, 3, {0x80,  33, 0x00} },
	{ 8.50, 3, {0x90,  34, 0x7f} },
	{ 8.75, 3, {0x80,  34, 0x00} },
	{ 8.75, 3, {0x90,  35, 0x7f} },
	{ 9.00, 3, {0x80,  35, 0x00} },
	{ 9.00, 3, {0x90,  36, 0x7f} },
	{ 9.25, 3, {0x80,  36, 0x00} },
	{ 9.25, 3, {0x90,  37, 0x7f} },
	{ 9.50, 3, {0x80,  37, 0x00} },
	{ 9.50, 3, {0x90,  38, 0x7f} },
	{ 9.75, 3, {0x80,  38, 0x00} },
	{ 9.75, 3, {0x90,  39, 0x7f} },
	{10.00, 3, {0x80,  39, 0x00} },
	{10.00, 3, {0x90,  40, 0x7f} },
	{10.25, 3, {0x80,  40, 0x00} },
	{10.25, 3, {0x90,  41, 0x7f} },
	{10.50, 3, {0x80,  41, 0x00} },
	{10.50, 3, {0x90,  42, 0x7f} },
	{10.75, 3, {0x80,  42, 0x00} },
	{10.75, 3, {0x90,  43, 0x7f} },
	{11.00, 3, {0x80,  43, 0x00} },
	{11.00, 3, {0x90,  44, 0x7f} },
	{11.25, 3, {0x80,  44, 0x00} },
	{11.25, 3, {0x90,  45, 0x7f} },
	{11.50, 3, {0x80,  45, 0x00} },
	{11.50, 3, {0x90,  46, 0x7f} },
	{11.75, 3, {0x80,  46, 0x00} },
	{11.75, 3, {0x90,  47, 0x7f} },
	{12.00, 3, {0x80,  47, 0x00} },
	{12.00, 3, {0x90,  48, 0x7f} },
	{12.25, 3, {0x80,  48, 0x00} },
	{12.25, 3, {0x90,  49, 0x7f} },
	{12.50, 3, {0x80,  49, 0x00} },
	{12.50, 3, {0x90,  50, 0x7f} },
	{12.75, 3, {0x80,  50, 0x00} },
	{12.75, 3, {0x90,  51, 0x7f} },
	{13.00, 3, {0x80,  51, 0x00} },
	{13.00, 3, {0x90,  52, 0x7f} },
	{13.25, 3, {0x80,  52, 0x00} },
	{13.25, 3, {0x90,  53, 0x7f} },
	{13.50, 3, {0x80,  53, 0x00} },
	{13.50, 3, {0x90,  54, 0x7f} },
	{13.75, 3, {0x80,  54, 0x00} },
	{13.75, 3, {0x90,  55, 0x7f} },
	{14.00, 3, {0x80,  55, 0x00} },
	{14.00, 3, {0x90,  56, 0x7f} },
	{14.25, 3, {0x80,  56, 0x00} },
	{14.25, 3, {0x90,  57, 0x7f} },
	{14.50, 3, {0x80,  57, 0x00} },
	{14.50, 3, {0x90,  58, 0x7f} },
	{14.75, 3, {0x80,  58, 0x00} },
	{14.75, 3, {0x90,  59, 0x7f} },
	{15.00, 3, {0x80,  59, 0x00} },
	{15.00, 3, {0x90,  60, 0x7f} },
	{15.25, 3, {0x80,  60, 0x00} },
	{15.25, 3, {0x90,  61, 0x7f} },
	{15.50, 3, {0x80,  61, 0x00} },
	{15.50, 3, {0x90,  62, 0x7f} },
	{15.75, 3, {0x80,  62, 0x00} },
	{15.75, 3, {0x90,  63, 0x7f} },
	{16.00, 3, {0x80,  63, 0x00} },
	{16.00, 3, {0x90,  64, 0x7f} },
	{16.25, 3, {0x80,  64, 0x00} },
	{16.25, 3, {0x90,  65, 0x7f} },
	{16.50, 3, {0x80,  65, 0x00} },
	{16.50, 3, {0x90,  66, 0x7f} },
	{16.75, 3, {0x80,  66, 0x00} },
	{16.75, 3, {0x90,  67, 0x7f} },
	{17.00, 3, {0x80,  67, 0x00} },
	{17.00, 3, {0x90,  68, 0x7f} },
	{17.25, 3, {0x80,  68, 0x00} },
	{17.25, 3, {0x90,  69, 0x7f} },
	{17.50, 3, {0x80,  69, 0x00} },
	{17.50, 3, {0x90,  70, 0x7f} },
	{17.75, 3, {0x80,  70, 0x00} },
	{17.75, 3, {0x90,  71, 0x7f} },
	{18.00, 3, {0x80,  71, 0x00} },
	{18.00, 3, {0x90,  72, 0x7f} },
	{18.25, 3, {0x80,  72, 0x00} },
	{18.25, 3, {0x90,  73, 0x7f} },
	{18.50, 3, {0x80,  73, 0x00} },
	{18.50, 3, {0x90,  74, 0x7f} },
	{18.75, 3, {0x80,  74, 0x00} },
	{18.75, 3, {0x90,  75, 0x7f} },
	{19.00, 3, {0x80,  75, 0x00} },
	{19.00, 3, {0x90,  76, 0x7f} },
	{19.25, 3, {0x80,  76, 0x00} },
	{19.25, 3, {0x90,  77, 0x7f} },
	{19.50, 3, {0x80,  77, 0x00} },
	{19.50, 3, {0x90,  78, 0x7f} },
	{19.75, 3, {0x80,  78, 0x00} },
	{19.75, 3, {0x90,  79, 0x7f} },
	{20.00, 3, {0x80,  79, 0x00} },
	{20.00, 3, {0x90,  80, 0x7f} },
	{20.25, 3, {0x80,  80, 0x00} },
	{20.25, 3, {0x90,  81, 0x7f} },
	{20.50, 3, {0x80,  81, 0x00} },
	{20.50, 3, {0x90,  82, 0x7f} },
	{20.75, 3, {0x80,  82, 0x00} },
	{20.75, 3, {0x90,  83, 0x7f} },
	{21.00, 3, {0x80,  83, 0x00} },
	{21.00, 3, {0x90,  84, 0x7f} },
	{21.25, 3, {0x80,  84, 0x00} },
	{21.25, 3, {0x90,  85, 0x7f} },
	{21.50, 3, {0x80,  85, 0x00} },
	{21.50, 3, {0x90,  86, 0x7f} },
	{21.75, 3, {0x80,  86, 0x00} },
	{21.75, 3, {0x90,  87, 0x7f} },
	{22.00, 3, {0x80,  87, 0x00} },
	{22.00, 3, {0x90,  88, 0x7f} },
	{22.25, 3, {0x80,  88, 0x00} },
	{22.25, 3, {0x90,  89, 0x7f} },
	{22.50, 3, {0x80,  89, 0x00} },
	{22.50, 3, {0x90,  90, 0x7f} },
	{22.75, 3, {0x80,  90, 0x00} },
	{22.75, 3, {0x90,  91, 0x7f} },
	{23.00, 3, {0x80,  91, 0x00} },
	{23.00, 3, {0x90,  92, 0x7f} },
	{23.25, 3, {0x80,  92, 0x00} },
	{23.25, 3, {0x90,  93, 0x7f} },
	{23.50, 3, {0x80,  93, 0x00} },
	{23.50, 3, {0x90,  94, 0x7f} },
	{23.75, 3, {0x80,  94, 0x00} },
	{23.75, 3, {0x90,  95, 0x7f} },
	{24.00, 3, {0x80,  95, 0x00} },
	{24.00, 3, {0x90,  96, 0x7f} },
	{24.25, 3, {0x80,  96, 0x00} },
	{24.25, 3, {0x90,  97, 0x7f} },
	{24.50, 3, {0x80,  97, 0x00} },
	{24.50, 3, {0x90,  98, 0x7f} },
	{24.75, 3, {0x80,  98, 0x00} },
	{24.75, 3, {0x90,  99, 0x7f} },
	{25.00, 3, {0x80,  99, 0x00} },
	{25.00, 3, {0x90, 100, 0x7f} },
	{25.25, 3, {0x80, 100, 0x00} },
	{25.25, 3, {0x90, 101, 0x7f} },
	{25.50, 3, {0x80, 101, 0x00} },
	{25.50, 3, {0x90, 102, 0x7f} },
	{25.75, 3, {0x80, 102, 0x00} },
	{25.75, 3, {0x90, 103, 0x7f} },
	{26.00, 3, {0x80, 103, 0x00} },
	{26.00, 3, {0x90, 104, 0x7f} },
	{26.25, 3, {0x80, 104, 0x00} },
	{26.25, 3, {0x90, 105, 0x7f} },
	{26.50, 3, {0x80, 105, 0x00} },
	{26.50, 3, {0x90, 106, 0x7f} },
	{26.75, 3, {0x80, 106, 0x00} },
	{26.75, 3, {0x90, 107, 0x7f} },
	{27.00, 3, {0x80, 107, 0x00} },
	{27.00, 3, {0x90, 108, 0x7f} },
	{27.25, 3, {0x80, 108, 0x00} },
	{27.25, 3, {0x90, 109, 0x7f} },
	{27.50, 3, {0x80, 109, 0x00} },
	{27.50, 3, {0x90, 110, 0x7f} },
	{27.75, 3, {0x80, 110, 0x00} },
	{27.75, 3, {0x90, 111, 0x7f} },
	{28.00, 3, {0x80, 111, 0x00} },
	{28.00, 3, {0x90, 112, 0x7f} },
	{28.25, 3, {0x80, 112, 0x00} },
	{28.25, 3, {0x90, 113, 0x7f} },
	{28.50, 3, {0x80, 113, 0x00} },
	{28.50, 3, {0x90, 114, 0x7f} },
	{28.75, 3, {0x80, 114, 0x00} },
	{28.75, 3, {0x90, 115, 0x7f} },
	{29.00, 3, {0x80, 115, 0x00} },
	{29.00, 3, {0x90, 116, 0x7f} },
	{29.25, 3, {0x80, 116, 0x00} },
	{29.25, 3, {0x90, 117, 0x7f} },
	{29.50, 3, {0x80, 117, 0x00} },
	{29.50, 3, {0x90, 118, 0x7f} },
	{29.75, 3, {0x80, 118, 0x00} },
	{29.75, 3, {0x90, 119, 0x7f} },
	{30.00, 3, {0x80, 119, 0x00} },
	{30.00, 3, {0x90, 120, 0x7f} },
	{30.25, 3, {0x80, 120, 0x00} },
	{30.25, 3, {0x90, 121, 0x7f} },
	{30.50, 3, {0x80, 121, 0x00} },
	{30.50, 3, {0x90, 122, 0x7f} },
	{30.75, 3, {0x80, 122, 0x00} },
	{30.75, 3, {0x90, 123, 0x7f} },
	{31.00, 3, {0x80, 123, 0x00} },
	{31.00, 3, {0x90, 124, 0x7f} },
	{31.25, 3, {0x80, 124, 0x00} },
	{31.25, 3, {0x90, 125, 0x7f} },
	{31.50, 3, {0x80, 125, 0x00} },
	{31.50, 3, {0x90, 126, 0x7f} },
	{31.75, 3, {0x80, 126, 0x00} },
	{31.75, 3, {0x90, 127, 0x7f} },
	{32.00, 3, {0x80, 127, 0x00} },
	{32.00, 3, {0xff, 255, 0xff} }, // sentinel
};

static const MIDISequence s3[] = { // velocity sweep
	{ 0.000, 3, {0x90, 60, 0x00} },
	{ 0.125, 3, {0x80, 60, 0x00} },
	{ 0.125, 3, {0x90, 61, 0x01} },
	{ 0.250, 3, {0x80, 61, 0x00} },
	{ 0.250, 3, {0x90, 60, 0x02} },
	{ 0.375, 3, {0x80, 60, 0x00} },
	{ 0.375, 3, {0x90, 61, 0x03} },
	{ 0.500, 3, {0x80, 61, 0x00} },
	{ 0.500, 3, {0x90, 60, 0x04} },
	{ 0.625, 3, {0x80, 60, 0x00} },
	{ 0.625, 3, {0x90, 61, 0x05} },
	{ 0.750, 3, {0x80, 61, 0x00} },
	{ 0.750, 3, {0x90, 60, 0x06} },
	{ 0.875, 3, {0x80, 60, 0x00} },
	{ 0.875, 3, {0x90, 61, 0x07} },
	{ 1.000, 3, {0x80, 61, 0x00} },
	{ 1.000, 3, {0x90, 60, 0x08} },
	{ 1.125, 3, {0x80, 60, 0x00} },
	{ 1.125, 3, {0x90, 61, 0x09} },
	{ 1.250, 3, {0x80, 61, 0x00} },
	{ 1.250, 3, {0x90, 60, 0x0a} },
	{ 1.375, 3, {0x80, 60, 0x00} },
	{ 1.375, 3, {0x90, 61, 0x0b} },
	{ 1.500, 3, {0x80, 61, 0x00} },
	{ 1.500, 3, {0x90, 60, 0x0c} },
	{ 1.625, 3, {0x80, 60, 0x00} },
	{ 1.625, 3, {0x90, 61, 0x0d} },
	{ 1.750, 3, {0x80, 61, 0x00} },
	{ 1.750, 3, {0x90, 60, 0x0e} },
	{ 1.875, 3, {0x80, 60, 0x00} },
	{ 1.875, 3, {0x90, 61, 0x0f} },
	{ 2.000, 3, {0x80, 61, 0x00} },
	{ 2.000, 3, {0x90, 60, 0x10} },
	{ 2.125, 3, {0x80, 60, 0x00} },
	{ 2.125, 3, {0x90, 61, 0x11} },
	{ 2.250, 3, {0x80, 61, 0x00} },
	{ 2.250, 3, {0x90, 60, 0x12} },
	{ 2.375, 3, {0x80, 60, 0x00} },
	{ 2.375, 3, {0x90, 61, 0x13} },
	{ 2.500, 3, {0x80, 61, 0x00} },
	{ 2.500, 3, {0x90, 60, 0x14} },
	{ 2.625, 3, {0x80, 60, 0x00} },
	{ 2.625, 3, {0x90, 61, 0x15} },
	{ 2.750, 3, {0x80, 61, 0x00} },
	{ 2.750, 3, {0x90, 60, 0x16} },
	{ 2.875, 3, {0x80, 60, 0x00} },
	{ 2.875, 3, {0x90, 61, 0x17} },
	{ 3.000, 3, {0x80, 61, 0x00} },
	{ 3.000, 3, {0x90, 60, 0x18} },
	{ 3.125, 3, {0x80, 60, 0x00} },
	{ 3.125, 3, {0x90, 61, 0x19} },
	{ 3.250, 3, {0x80, 61, 0x00} },
	{ 3.250, 3, {0x90, 60, 0x1a} },
	{ 3.375, 3, {0x80, 60, 0x00} },
	{ 3.375, 3, {0x90, 61, 0x1b} },
	{ 3.500, 3, {0x80, 61, 0x00} },
	{ 3.500, 3, {0x90, 60, 0x1c} },
	{ 3.625, 3, {0x80, 60, 0x00} },
	{ 3.625, 3, {0x90, 61, 0x1d} },
	{ 3.750, 3, {0x80, 61, 0x00} },
	{ 3.750, 3, {0x90, 60, 0x1e} },
	{ 3.875, 3, {0x80, 60, 0x00} },
	{ 3.875, 3, {0x90, 61, 0x1f} },
	{ 4.000, 3, {0x80, 61, 0x00} },
	{ 4.000, 3, {0x90, 60, 0x20} },
	{ 4.125, 3, {0x80, 60, 0x00} },
	{ 4.125, 3, {0x90, 61, 0x21} },
	{ 4.250, 3, {0x80, 61, 0x00} },
	{ 4.250, 3, {0x90, 60, 0x22} },
	{ 4.375, 3, {0x80, 60, 0x00} },
	{ 4.375, 3, {0x90, 61, 0x23} },
	{ 4.500, 3, {0x80, 61, 0x00} },
	{ 4.500, 3, {0x90, 60, 0x24} },
	{ 4.625, 3, {0x80, 60, 0x00} },
	{ 4.625, 3, {0x90, 61, 0x25} },
	{ 4.750, 3, {0x80, 61, 0x00} },
	{ 4.750, 3, {0x90, 60, 0x26} },
	{ 4.875, 3, {0x80, 60, 0x00} },
	{ 4.875, 3, {0x90, 61, 0x27} },
	{ 5.000, 3, {0x80, 61, 0x00} },
	{ 5.000, 3, {0x90, 60, 0x28} },
	{ 5.125, 3, {0x80, 60, 0x00} },
	{ 5.125, 3, {0x90, 61, 0x29} },
	{ 5.250, 3, {0x80, 61, 0x00} },
	{ 5.250, 3, {0x90, 60, 0x2a} },
	{ 5.375, 3, {0x80, 60, 0x00} },
	{ 5.375, 3, {0x90, 61, 0x2b} },
	{ 5.500, 3, {0x80, 61, 0x00} },
	{ 5.500, 3, {0x90, 60, 0x2c} },
	{ 5.625, 3, {0x80, 60, 0x00} },
	{ 5.625, 3, {0x90, 61, 0x2d} },
	{ 5.750, 3, {0x80, 61, 0x00} },
	{ 5.750, 3, {0x90, 60, 0x2e} },
	{ 5.875, 3, {0x80, 60, 0x00} },
	{ 5.875, 3, {0x90, 61, 0x2f} },
	{ 6.000, 3, {0x80, 61, 0x00} },
	{ 6.000, 3, {0x90, 60, 0x30} },
	{ 6.125, 3, {0x80, 60, 0x00} },
	{ 6.125, 3, {0x90, 61, 0x31} },
	{ 6.250, 3, {0x80, 61, 0x00} },
	{ 6.250, 3, {0x90, 60, 0x32} },
	{ 6.375, 3, {0x80, 60, 0x00} },
	{ 6.375, 3, {0x90, 61, 0x33} },
	{ 6.500, 3, {0x80, 61, 0x00} },
	{ 6.500, 3, {0x90, 60, 0x34} },
	{ 6.625, 3, {0x80, 60, 0x00} },
	{ 6.625, 3, {0x90, 61, 0x35} },
	{ 6.750, 3, {0x80, 61, 0x00} },
	{ 6.750, 3, {0x90, 60, 0x36} },
	{ 6.875, 3, {0x80, 60, 0x00} },
	{ 6.875, 3, {0x90, 61, 0x37} },
	{ 7.000, 3, {0x80, 61, 0x00} },
	{ 7.000, 3, {0x90, 60, 0x38} },
	{ 7.125, 3, {0x80, 60, 0x00} },
	{ 7.125, 3, {0x90, 61, 0x39} },
	{ 7.250, 3, {0x80, 61, 0x00} },
	{ 7.250, 3, {0x90, 60, 0x3a} },
	{ 7.375, 3, {0x80, 60, 0x00} },
	{ 7.375, 3, {0x90, 61, 0x3b} },
	{ 7.500, 3, {0x80, 61, 0x00} },
	{ 7.500, 3, {0x90, 60, 0x3c} },
	{ 7.625, 3, {0x80, 60, 0x00} },
	{ 7.625, 3, {0x90, 61, 0x3d} },
	{ 7.750, 3, {0x80, 61, 0x00} },
	{ 7.750, 3, {0x90, 60, 0x3e} },
	{ 7.875, 3, {0x80, 60, 0x00} },
	{ 7.875, 3, {0x90, 61, 0x3f} },
	{ 8.000, 3, {0x80, 61, 0x00} },
	{ 8.000, 3, {0x90, 60, 0x40} },
	{ 8.125, 3, {0x80, 60, 0x00} },
	{ 8.125, 3, {0x90, 61, 0x41} },
	{ 8.250, 3, {0x80, 61, 0x00} },
	{ 8.250, 3, {0x90, 60, 0x42} },
	{ 8.375, 3, {0x80, 60, 0x00} },
	{ 8.375, 3, {0x90, 61, 0x43} },
	{ 8.500, 3, {0x80, 61, 0x00} },
	{ 8.500, 3, {0x90, 60, 0x44} },
	{ 8.625, 3, {0x80, 60, 0x00} },
	{ 8.625, 3, {0x90, 61, 0x45} },
	{ 8.750, 3, {0x80, 61, 0x00} },
	{ 8.750, 3, {0x90, 60, 0x46} },
	{ 8.875, 3, {0x80, 60, 0x00} },
	{ 8.875, 3, {0x90, 61, 0x47} },
	{ 9.000, 3, {0x80, 61, 0x00} },
	{ 9.000, 3, {0x90, 60, 0x48} },
	{ 9.125, 3, {0x80, 60, 0x00} },
	{ 9.125, 3, {0x90, 61, 0x49} },
	{ 9.250, 3, {0x80, 61, 0x00} },
	{ 9.250, 3, {0x90, 60, 0x4a} },
	{ 9.375, 3, {0x80, 60, 0x00} },
	{ 9.375, 3, {0x90, 61, 0x4b} },
	{ 9.500, 3, {0x80, 61, 0x00} },
	{ 9.500, 3, {0x90, 60, 0x4c} },
	{ 9.625, 3, {0x80, 60, 0x00} },
	{ 9.625, 3, {0x90, 61, 0x4d} },
	{ 9.750, 3, {0x80, 61, 0x00} },
	{ 9.750, 3, {0x90, 60, 0x4e} },
	{ 9.875, 3, {0x80, 60, 0x00} },
	{ 9.875, 3, {0x90, 61, 0x4f} },
	{10.000, 3, {0x80, 61, 0x00} },
	{10.000, 3, {0x90, 60, 0x50} },
	{10.125, 3, {0x80, 60, 0x00} },
	{10.125, 3, {0x90, 61, 0x51} },
	{10.250, 3, {0x80, 61, 0x00} },
	{10.250, 3, {0x90, 60, 0x52} },
	{10.375, 3, {0x80, 60, 0x00} },
	{10.375, 3, {0x90, 61, 0x53} },
	{10.500, 3, {0x80, 61, 0x00} },
	{10.500, 3, {0x90, 60, 0x54} },
	{10.625, 3, {0x80, 60, 0x00} },
	{10.625, 3, {0x90, 61, 0x55} },
	{10.750, 3, {0x80, 61, 0x00} },
	{10.750, 3, {0x90, 60, 0x56} },
	{10.875, 3, {0x80, 60, 0x00} },
	{10.875, 3, {0x90, 61, 0x57} },
	{11.000, 3, {0x80, 61, 0x00} },
	{11.000, 3, {0x90, 60, 0x58} },
	{11.125, 3, {0x80, 60, 0x00} },
	{11.125, 3, {0x90, 61, 0x59} },
	{11.250, 3, {0x80, 61, 0x00} },
	{11.250, 3, {0x90, 60, 0x5a} },
	{11.375, 3, {0x80, 60, 0x00} },
	{11.375, 3, {0x90, 61, 0x5b} },
	{11.500, 3, {0x80, 61, 0x00} },
	{11.500, 3, {0x90, 60, 0x5c} },
	{11.625, 3, {0x80, 60, 0x00} },
	{11.625, 3, {0x90, 61, 0x5d} },
	{11.750, 3, {0x80, 61, 0x00} },
	{11.750, 3, {0x90, 60, 0x5e} },
	{11.875, 3, {0x80, 60, 0x00} },
	{11.875, 3, {0x90, 61, 0x5f} },
	{12.000, 3, {0x80, 61, 0x00} },
	{12.000, 3, {0x90, 60, 0x60} },
	{12.125, 3, {0x80, 60, 0x00} },
	{12.125, 3, {0x90, 61, 0x61} },
	{12.250, 3, {0x80, 61, 0x00} },
	{12.250, 3, {0x90, 60, 0x62} },
	{12.375, 3, {0x80, 60, 0x00} },
	{12.375, 3, {0x90, 61, 0x63} },
	{12.500, 3, {0x80, 61, 0x00} },
	{12.500, 3, {0x90, 60, 0x64} },
	{12.625, 3, {0x80, 60, 0x00} },
	{12.625, 3, {0x90, 61, 0x65} },
	{12.750, 3, {0x80, 61, 0x00} },
	{12.750, 3, {0x90, 60, 0x66} },
	{12.875, 3, {0x80, 60, 0x00} },
	{12.875, 3, {0x90, 61, 0x67} },
	{13.000, 3, {0x80, 61, 0x00} },
	{13.000, 3, {0x90, 60, 0x68} },
	{13.125, 3, {0x80, 60, 0x00} },
	{13.125, 3, {0x90, 61, 0x69} },
	{13.250, 3, {0x80, 61, 0x00} },
	{13.250, 3, {0x90, 60, 0x6a} },
	{13.375, 3, {0x80, 60, 0x00} },
	{13.375, 3, {0x90, 61, 0x6b} },
	{13.500, 3, {0x80, 61, 0x00} },
	{13.500, 3, {0x90, 60, 0x6c} },
	{13.625, 3, {0x80, 60, 0x00} },
	{13.625, 3, {0x90, 61, 0x6d} },
	{13.750, 3, {0x80, 61, 0x00} },
	{13.750, 3, {0x90, 60, 0x6e} },
	{13.875, 3, {0x80, 60, 0x00} },
	{13.875, 3, {0x90, 61, 0x6f} },
	{14.000, 3, {0x80, 61, 0x00} },
	{14.000, 3, {0x90, 60, 0x70} },
	{14.125, 3, {0x80, 60, 0x00} },
	{14.125, 3, {0x90, 61, 0x71} },
	{14.250, 3, {0x80, 61, 0x00} },
	{14.250, 3, {0x90, 60, 0x72} },
	{14.375, 3, {0x80, 60, 0x00} },
	{14.375, 3, {0x90, 61, 0x73} },
	{14.500, 3, {0x80, 61, 0x00} },
	{14.500, 3, {0x90, 60, 0x74} },
	{14.625, 3, {0x80, 60, 0x00} },
	{14.625, 3, {0x90, 61, 0x75} },
	{14.750, 3, {0x80, 61, 0x00} },
	{14.750, 3, {0x90, 60, 0x76} },
	{14.875, 3, {0x80, 60, 0x00} },
	{14.875, 3, {0x90, 61, 0x77} },
	{15.000, 3, {0x80, 61, 0x00} },
	{15.000, 3, {0x90, 60, 0x78} },
	{15.125, 3, {0x80, 60, 0x00} },
	{15.125, 3, {0x90, 61, 0x79} },
	{15.250, 3, {0x80, 61, 0x00} },
	{15.250, 3, {0x90, 60, 0x7a} },
	{15.375, 3, {0x80, 60, 0x00} },
	{15.375, 3, {0x90, 61, 0x7b} },
	{15.500, 3, {0x80, 61, 0x00} },
	{15.500, 3, {0x90, 60, 0x7c} },
	{15.625, 3, {0x80, 60, 0x00} },
	{15.625, 3, {0x90, 61, 0x7d} },
	{15.750, 3, {0x80, 61, 0x00} },
	{15.750, 3, {0x90, 60, 0x7e} },
	{15.875, 3, {0x80, 60, 0x00} },
	{15.875, 3, {0x90, 61, 0x7f} },
	{16.000, 3, {0x80, 61, 0x00} },
	{16.000, 3, {0xff, 255, 0xff} }, // sentinel
};

static const MIDISequence s4[] = { // channel1, sustain pedal test
	{ 0.00, 3, {0x90,   64, 0x7f} },
	{ 0.50, 3, {0x80,   64, 0x00} },
	{ 1.00, 3, {0xB0, 0x40, 0x7f} }, // CC64, Sustain on
	{ 1.25, 3, {0x90,   64, 0x7f} },
	{ 1.75, 3, {0x80,   64, 0x00} },
	{ 2.25, 3, {0x90,   66, 0x7f} },
	{ 3.00, 3, {0xB0, 0x40, 0x00} }, // CC64, Sustain off
	{ 3.25, 3, {0x80,   66, 0x00} },
	{ 3.25, 3, {0x90,   64, 0x7f} },
	{ 3.75, 3, {0x80,   64, 0x00} },
	{ 4.00, 3, {0xff,  255, 0xff} }, // sentinel
};

static const MIDISequence *sequences[] = {
	s0, s1, s2, s3, s4
};

}} // namespace

#define NUM_MIDI_EVENT_GENERATORS (sizeof (ARDOUR::DummyMidiData::sequences) / sizeof(ARDOUR::DummyMidiData::MIDISequence*))

#endif