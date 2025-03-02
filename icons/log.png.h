#ifndef LOG_PNG_H
#define LOG_PNG_H

#include <wx/mstream.h>
#include <wx/image.h>
#include <wx/bitmap.h>

static const unsigned char log_png[] =
{
	0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 
	0x00, 0x0D, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x40, 
	0x00, 0x00, 0x00, 0x40, 0x08, 0x06, 0x00, 0x00, 0x00, 0xAA, 
	0x69, 0x71, 0xDE, 0x00, 0x00, 0x00, 0x04, 0x73, 0x42, 0x49, 
	0x54, 0x08, 0x08, 0x08, 0x08, 0x7C, 0x08, 0x64, 0x88, 0x00, 
	0x00, 0x0B, 0xAD, 0x49, 0x44, 0x41, 0x54, 0x78, 0x9C, 0xED, 
	0x9A, 0x6D, 0x8C, 0x5C, 0xD7, 0x59, 0xC7, 0x7F, 0xCF, 0x39, 
	0x77, 0xE6, 0xBE, 0xCC, 0xCC, 0xCE, 0xEC, 0xCE, 0xAE, 0xD7, 
	0x8E, 0x63, 0xBB, 0x76, 0x42, 0x12, 0xC7, 0x69, 0x92, 0x3A, 
	0x4D, 0xF3, 0x02, 0x56, 0x1D, 0x4B, 0x08, 0x35, 0x40, 0xAA, 
	0x46, 0xAD, 0x28, 0x1F, 0x10, 0x48, 0x54, 0xA8, 0x48, 0x95, 
	0x40, 0x4A, 0x8B, 0xF8, 0x04, 0x55, 0x42, 0x05, 0x2A, 0x04, 
	0xD1, 0x0F, 0x10, 0x04, 0x2A, 0x51, 0x5B, 0x2A, 0xA4, 0x2A, 
	0x69, 0xAB, 0xB4, 0x69, 0x44, 0x23, 0xB9, 0x25, 0x95, 0x52, 
	0x4C, 0xEA, 0x90, 0xD8, 0x8E, 0xDB, 0x94, 0xD8, 0xD8, 0x5E, 
	0xBF, 0xAC, 0xD7, 0xFB, 0x3A, 0xAF, 0x77, 0xE6, 0xDE, 0x7B, 
	0x0E, 0x1F, 0xE6, 0xEE, 0x64, 0x76, 0xD6, 0x6D, 0xBC, 0x3B, 
	0xB3, 0x0E, 0x82, 0xFD, 0x4B, 0xF3, 0xE1, 0xCE, 0x39, 0x33, 
	0xE7, 0x79, 0xFE, 0xE7, 0x79, 0xFE, 0xE7, 0x39, 0xE7, 0x1E, 
	0xD8, 0xC4, 0x26, 0x36, 0xB1, 0x89, 0x4D, 0x6C, 0x62, 0x13, 
	0x9B, 0xF8, 0x7F, 0x0A, 0x79, 0x97, 0xC6, 0xD5, 0xC0, 0x04, 
	0x50, 0x00, 0x5C, 0xC0, 0x02, 0x21, 0x50, 0x01, 0x66, 0xD3, 
	0xE7, 0xEB, 0x82, 0xEB, 0x41, 0xC0, 0x6E, 0xE0, 0x40, 0x3E, 
	0x70, 0x0F, 0x64, 0x33, 0xFA, 0xDE, 0x56, 0x3B, 0xDE, 0x55, 
	0x6F, 0xB6, 0x4B, 0xF9, 0xC0, 0x6D, 0xE6, 0xBC, 0x6C, 0xE2, 
	0x38, 0xCA, 0x5A, 0x0B, 0x51, 0x9C, 0x48, 0xBD, 0xD9, 0x76, 
	0x1A, 0x61, 0xDB, 0xCB, 0xF9, 0x99, 0xF9, 0x6C, 0x26, 0x73, 
	0x2E, 0x4E, 0xCC, 0xF1, 0x6A, 0x3D, 0x3C, 0x02, 0x1C, 0x05, 
	0xFE, 0x7D, 0x23, 0x8C, 0xDB, 0x28, 0x02, 0xF6, 0x00, 0xBF, 
	0x59, 0x08, 0xDC, 0xDF, 0x31, 0xD6, 0xDE, 0x70, 0xFF, 0x7B, 
	0x77, 0xC5, 0xF7, 0xDD, 0xB1, 0x73, 0x64, 0xEF, 0x7B, 0xC6, 
	0xB9, 0x71, 0x4B, 0x81, 0x72, 0xC1, 0xC3, 0x5A, 0x43, 0xAE, 
	0x50, 0x5C, 0xF5, 0x43, 0x63, 0x2D, 0x97, 0xAE, 0x54, 0x38, 
	0x37, 0xBD, 0xC8, 0xE9, 0xF3, 0x73, 0x3C, 0xFD, 0xDC, 0x7F, 
	0xD8, 0x85, 0x4A, 0xB3, 0xB5, 0x54, 0x0F, 0xFD, 0x8D, 0x30, 
	0xD4, 0x19, 0xF2, 0xFF, 0x1D, 0x2A, 0x04, 0xEE, 0xA7, 0x5B, 
	0x51, 0x7C, 0xE8, 0x91, 0x03, 0x7B, 0xA3, 0x47, 0x0F, 0xDE, 
	0x96, 0xDF, 0xBD, 0x35, 0xA0, 0x59, 0xAF, 0x11, 0x86, 0x0D, 
	0x30, 0x8B, 0x44, 0x95, 0x3A, 0x33, 0x75, 0x07, 0x25, 0x42, 
	0xAE, 0x50, 0x24, 0x8E, 0xDA, 0x84, 0xCD, 0x3A, 0xB5, 0xEA, 
	0x12, 0x8D, 0x5A, 0x85, 0x3D, 0xB7, 0xDE, 0xC9, 0xF6, 0x2D, 
	0x45, 0xB2, 0x19, 0x87, 0x27, 0xBF, 0xF2, 0xFD, 0x24, 0xAA, 
	0x34, 0xB5, 0x84, 0x91, 0x05, 0xF6, 0x01, 0x6F, 0x0C, 0xD9, 
	0xDE, 0xA1, 0x11, 0x70, 0x60, 0x24, 0xE7, 0x7E, 0x2E, 0x9B, 
	0xD1, 0x77, 0x7E, 0xE2, 0x91, 0xFD, 0xC5, 0x0F, 0xFF, 0xD2, 
	0x4D, 0x84, 0xF5, 0xAA, 0xDB, 0x6C, 0x56, 0x49, 0xE2, 0x2C, 
	0x63, 0xE3, 0x93, 0xF8, 0xB9, 0x02, 0x60, 0x09, 0x1B, 0x75, 
	0x9A, 0x8D, 0x3A, 0x61, 0xB3, 0xCE, 0xA9, 0x1F, 0xBF, 0x4E, 
	0x62, 0x12, 0x04, 0x01, 0xB1, 0x04, 0x41, 0x81, 0x28, 0x8A, 
	0xF8, 0xE1, 0xF1, 0x29, 0x1E, 0xFB, 0xEB, 0xE7, 0x92, 0x5D, 
	0x91, 0xD5, 0x9F, 0x2D, 0x97, 0x79, 0x6A, 0x7E, 0x7E, 0xF1, 
	0xD5, 0x66, 0xF3, 0x21, 0x36, 0x80, 0x80, 0x41, 0x53, 0x60, 
	0x5B, 0xCE, 0xCB, 0xFC, 0x95, 0x56, 0xF2, 0xC8, 0x27, 0x1F, 
	0xDD, 0x9F, 0xFF, 0xD8, 0xA1, 0x7D, 0x54, 0x16, 0xE7, 0x68, 
	0xD6, 0x6B, 0x8C, 0x94, 0xCA, 0x14, 0x8A, 0x25, 0xDA, 0xAD, 
	0x16, 0xAD, 0x66, 0x83, 0x66, 0xB3, 0x4E, 0x1C, 0x47, 0x78, 
	0x7E, 0x0E, 0x3F, 0xC8, 0xE1, 0xF9, 0x39, 0x6A, 0x95, 0x45, 
	0x1A, 0xB5, 0x0A, 0x5E, 0x90, 0x67, 0x7C, 0xF2, 0x06, 0x3C, 
	0x3F, 0xE0, 0xF3, 0x5F, 0xFA, 0x1E, 0x5F, 0x7D, 0xFE, 0x28, 
	0xBF, 0xEE, 0xFA, 0x1C, 0xCA, 0xE5, 0x10, 0xA5, 0x38, 0xD2, 
	0x6C, 0xF2, 0xEC, 0xD2, 0xD2, 0x4B, 0x0B, 0x49, 0xF2, 0xC1, 
	0xA1, 0x78, 0xDD, 0x83, 0x41, 0x08, 0xF8, 0xBD, 0x8C, 0xA3, 
	0xFE, 0xE6, 0xA3, 0x07, 0x6F, 0xD1, 0xBF, 0xFF, 0x91, 0xFD, 
	0x59, 0x47, 0x09, 0x95, 0xC5, 0x79, 0xAC, 0x35, 0x28, 0xAD, 
	0x89, 0xDA, 0x6D, 0x5C, 0x3F, 0xC0, 0xF7, 0x73, 0xF8, 0xB9, 
	0x3C, 0x9E, 0x9F, 0xC3, 0xF5, 0x7C, 0xA2, 0xA8, 0xCD, 0xE2, 
	0xFC, 0x15, 0x16, 0xE7, 0xAE, 0xE0, 0x64, 0xB3, 0x4C, 0x6E, 
	0xDB, 0x41, 0x90, 0x2B, 0xF0, 0x83, 0xFF, 0x3C, 0xCD, 0x67, 
	0xFF, 0xFE, 0x5F, 0x6D, 0xAE, 0x1E, 0xC9, 0x6F, 0x7B, 0x01, 
	0x45, 0xAD, 0x51, 0x22, 0x88, 0x52, 0x2C, 0x1A, 0xC3, 0x1F, 
	0x5F, 0xBA, 0x54, 0x4D, 0x60, 0x64, 0x68, 0x9E, 0xA7, 0x58, 
	0x4F, 0x0A, 0x4C, 0x8E, 0x04, 0xD9, 0xA7, 0xCB, 0x45, 0xEF, 
	0x81, 0xCF, 0x7C, 0xFC, 0x1E, 0xFF, 0x8E, 0x3D, 0x5B, 0xD0, 
	0x4A, 0x50, 0x8E, 0x83, 0x28, 0x45, 0x3E, 0x5F, 0xC2, 0x0B, 
	0x02, 0xFC, 0xA0, 0x80, 0xD6, 0x0E, 0xDA, 0x71, 0x10, 0x11, 
	0xAA, 0x95, 0x45, 0x66, 0x2F, 0x5F, 0xC4, 0xD8, 0x84, 0x8C, 
	0xE3, 0xB2, 0x73, 0xF7, 0x2D, 0xB8, 0x7E, 0xC0, 0xA9, 0xF3, 
	0x73, 0x3C, 0xF9, 0x85, 0x67, 0xED, 0xD1, 0xE3, 0x67, 0xE5, 
	0xC3, 0x19, 0x4F, 0xEE, 0x0D, 0xF2, 0xAB, 0x06, 0x1C, 0xD5, 
	0x9A, 0xB2, 0xE3, 0xC8, 0x4C, 0x1C, 0xDF, 0x07, 0x1C, 0x19, 
	0xD8, 0xEB, 0x1E, 0xAC, 0x95, 0x80, 0x87, 0xFD, 0xAC, 0xFE, 
	0xCA, 0xAF, 0xDE, 0xBF, 0x73, 0xEC, 0x77, 0x1F, 0xDE, 0x87, 
	0x76, 0x1C, 0xE2, 0xA8, 0x8D, 0x76, 0x3A, 0x7F, 0x33, 0x36, 
	0xB1, 0x15, 0xC7, 0x71, 0xD0, 0xDA, 0x21, 0x8A, 0x5A, 0xD4, 
	0xAB, 0x4B, 0xA9, 0xC0, 0x55, 0x70, 0x3D, 0x97, 0x91, 0x52, 
	0x99, 0x91, 0xE2, 0x28, 0xDA, 0xC9, 0xF2, 0x5F, 0xE7, 0x66, 
	0xF9, 0xC7, 0x6F, 0x1C, 0xE6, 0xF9, 0x97, 0x4E, 0xF2, 0x2B, 
	0x9E, 0x2F, 0x7F, 0x56, 0x28, 0x75, 0x07, 0x09, 0x81, 0x6A, 
	0x92, 0xB0, 0xD5, 0x79, 0xDB, 0xBC, 0xBB, 0x7C, 0x3F, 0xFF, 
	0x62, 0xB5, 0x7A, 0x90, 0x21, 0x13, 0xB0, 0xA6, 0x14, 0xC8, 
	0xFB, 0xCE, 0xFC, 0x6D, 0x37, 0x96, 0x4A, 0x9F, 0xFB, 0xC4, 
	0x7D, 0xB2, 0x3C, 0xBB, 0x61, 0xA3, 0x46, 0x9C, 0x24, 0x38, 
	0x4E, 0x06, 0xA5, 0x34, 0x60, 0x88, 0xA2, 0x08, 0x47, 0x6B, 
	0x3C, 0x3F, 0x4F, 0xAE, 0x30, 0x42, 0x7E, 0xA4, 0x44, 0x26, 
	0xEB, 0x02, 0x70, 0xF8, 0x95, 0xB7, 0xF8, 0xE7, 0xE7, 0x8F, 
	0xDA, 0x57, 0x4F, 0x4E, 0xC9, 0xC1, 0xAC, 0xCB, 0x43, 0x9E, 
	0x4F, 0xA0, 0x54, 0x77, 0x8C, 0xAA, 0xB5, 0x9C, 0x8A, 0x63, 
	0x34, 0xB0, 0xC3, 0x71, 0x18, 0xCF, 0x64, 0x10, 0x11, 0x5E, 
	0x0B, 0x43, 0xBE, 0xBC, 0xB0, 0xF0, 0x4A, 0x25, 0x49, 0x3E, 
	0xF0, 0xAE, 0x11, 0x00, 0xFC, 0x81, 0xA7, 0xD4, 0x93, 0x5B, 
	0xCA, 0x01, 0x9F, 0xF9, 0xF8, 0x7E, 0x7D, 0xC7, 0x4D, 0x13, 
	0x68, 0xED, 0xA0, 0x94, 0xC2, 0x62, 0x11, 0x51, 0x64, 0x32, 
	0x19, 0x32, 0xAE, 0x8F, 0xEB, 0x7A, 0xDD, 0x14, 0xF8, 0xD1, 
	0xC9, 0xF3, 0xBC, 0x78, 0xE4, 0xA7, 0x3C, 0xF7, 0xBD, 0x13, 
	0x8C, 0x8A, 0xF0, 0x01, 0xAB, 0x79, 0xD0, 0xF7, 0x51, 0x57, 
	0x19, 0x60, 0xD6, 0x18, 0x66, 0x8D, 0x61, 0x6F, 0x26, 0xC3, 
	0xE9, 0x38, 0xE6, 0x17, 0x5C, 0x17, 0x11, 0xA1, 0x65, 0x2D, 
	0x9F, 0xBA, 0x70, 0x21, 0xB2, 0xE0, 0x01, 0x66, 0x08, 0xBE, 
	0x03, 0xEB, 0x10, 0x41, 0x57, 0xE4, 0xDC, 0x83, 0xBE, 0xBF, 
	0xE3, 0xD5, 0x76, 0x8B, 0x72, 0xD1, 0xE7, 0x81, 0xBB, 0xB7, 
	0xF3, 0xFE, 0x7D, 0xDB, 0x99, 0x2C, 0x17, 0x70, 0x33, 0x19, 
	0x5A, 0xB1, 0x65, 0x76, 0xA9, 0xC9, 0x5B, 0x53, 0x0B, 0x1C, 
	0x3D, 0x71, 0x9E, 0x63, 0xA7, 0x2F, 0x33, 0x91, 0xCD, 0x70, 
	0xBB, 0x11, 0xEE, 0x76, 0x5D, 0xB6, 0x3B, 0x3F, 0x3F, 0xEB, 
	0xAE, 0x24, 0x09, 0x0B, 0xD6, 0x72, 0x6B, 0x26, 0xC3, 0xD9, 
	0x38, 0xC6, 0x53, 0x8A, 0xED, 0xD9, 0x2C, 0x4A, 0x84, 0x3F, 
	0x9D, 0x9E, 0x5E, 0x9A, 0x8A, 0xA2, 0x47, 0x81, 0xC3, 0xEB, 
	0x75, 0xB8, 0x1F, 0x6B, 0x16, 0xC1, 0x96, 0xB5, 0x4F, 0x4C, 
	0x45, 0xD1, 0x9F, 0xFF, 0x45, 0x79, 0xBC, 0x7C, 0xAC, 0xD5, 
	0xE2, 0xCD, 0x1F, 0x4E, 0xF1, 0x0F, 0x2F, 0x9F, 0xA1, 0x6A, 
	0x0C, 0xB1, 0xED, 0x14, 0xF6, 0x45, 0x51, 0x4C, 0x6A, 0xCD, 
	0xAD, 0x99, 0x0C, 0x1F, 0xCA, 0x8F, 0x50, 0xD6, 0xFA, 0x9A, 
	0xFF, 0x5F, 0x8B, 0x90, 0xD8, 0xCE, 0x56, 0xA0, 0xAC, 0x35, 
	0x0B, 0xE6, 0xED, 0xC9, 0xBE, 0xCB, 0xF7, 0x8B, 0x53, 0x51, 
	0x74, 0x90, 0x21, 0x12, 0xB0, 0xAE, 0x65, 0xD0, 0x15, 0x39, 
	0xF3, 0xC9, 0x52, 0x69, 0xD7, 0x6D, 0xD9, 0xEC, 0xB0, 0xEC, 
	0xE8, 0x62, 0xC1, 0x5A, 0xCE, 0xC4, 0x31, 0xFB, 0xD3, 0x59, 
	0x3F, 0x17, 0xC7, 0x4C, 0x38, 0x0E, 0x05, 0xC7, 0xE1, 0x64, 
	0xAB, 0xC5, 0x53, 0xB3, 0xB3, 0xC7, 0xEB, 0xC6, 0xDC, 0x39, 
	0xAC, 0xF1, 0xAE, 0x96, 0x86, 0xEF, 0x88, 0x96, 0xB5, 0x4F, 
	0x7C, 0xAB, 0x56, 0x9B, 0x1F, 0x74, 0xF0, 0x25, 0xB3, 0x3A, 
	0x95, 0x47, 0x45, 0xB0, 0x40, 0x92, 0x3E, 0xFB, 0x5A, 0xB3, 
	0x90, 0x74, 0x9E, 0xF6, 0x7A, 0x1E, 0x0D, 0x63, 0xF6, 0xD1, 
	0xD9, 0x45, 0x0E, 0x05, 0xEB, 0x22, 0x00, 0xF8, 0xE2, 0xE5, 
	0x24, 0x99, 0xFA, 0x71, 0xBB, 0xBD, 0xE2, 0xCB, 0x13, 0x51, 
	0x44, 0xD5, 0xAE, 0xDE, 0xC9, 0x2E, 0x5C, 0xC5, 0xD1, 0x59, 
	0x63, 0xA8, 0x5B, 0xCB, 0xD9, 0x38, 0x5E, 0xD5, 0xE6, 0x02, 
	0xED, 0xF4, 0x37, 0x5B, 0xB4, 0xA6, 0x6D, 0x2D, 0xB1, 0xB5, 
	0x28, 0x60, 0x77, 0x36, 0xBB, 0x04, 0x1C, 0x5C, 0xA7, 0xDD, 
	0xAB, 0xB0, 0x5E, 0x02, 0xA8, 0x1B, 0xF3, 0x85, 0xFE, 0x28, 
	0xD0, 0x22, 0xAB, 0xE4, 0xB9, 0x65, 0x2D, 0x3F, 0x89, 0x63, 
	0x2A, 0x7D, 0x24, 0x28, 0xE0, 0x6C, 0x92, 0x30, 0x63, 0xED, 
	0xAA, 0xB6, 0xAC, 0x08, 0xBD, 0xD4, 0xE6, 0x44, 0x68, 0xA4, 
	0x7D, 0xDE, 0x97, 0xCB, 0x8D, 0x02, 0x0F, 0xAD, 0xD7, 0xEE, 
	0x7E, 0xAC, 0x9B, 0x00, 0xE0, 0xE9, 0x4B, 0x71, 0xBC, 0xF8, 
	0x46, 0x4F, 0x14, 0x78, 0x3D, 0x86, 0x2E, 0xC3, 0x15, 0x41, 
	0x03, 0xD3, 0x7D, 0xDF, 0x8F, 0x29, 0xC5, 0x88, 0x52, 0x6C, 
	0x13, 0xE1, 0x4C, 0x92, 0xAC, 0x68, 0xD3, 0x22, 0xCC, 0xF7, 
	0xF4, 0xCF, 0x69, 0x4D, 0xBD, 0x27, 0x0D, 0x7C, 0xA5, 0x7E, 
	0x6D, 0x00, 0xBB, 0x57, 0x60, 0x10, 0x02, 0x08, 0xAD, 0x7D, 
	0xFC, 0x99, 0x6A, 0xB5, 0xBA, 0xFC, 0x9C, 0x13, 0xA1, 0x76, 
	0x95, 0x14, 0x28, 0x88, 0xB0, 0x60, 0x0C, 0xAD, 0xBE, 0xB6, 
	0xB2, 0x08, 0x2D, 0x20, 0x50, 0x8A, 0xB3, 0x3D, 0x24, 0x94, 
	0x64, 0xA5, 0x36, 0xE7, 0xB5, 0x26, 0x32, 0x86, 0xB6, 0x31, 
	0xDC, 0xEC, 0xBA, 0xD8, 0xCE, 0x21, 0xCB, 0xD6, 0x41, 0x6C, 
	0x5F, 0xC6, 0x40, 0x04, 0x00, 0x5F, 0x5A, 0x4C, 0x92, 0x99, 
	0x13, 0xAD, 0x16, 0xD0, 0x71, 0x74, 0xE9, 0x2A, 0x04, 0xE4, 
	0x95, 0x22, 0x10, 0xE1, 0x72, 0x5F, 0x14, 0x8C, 0x2A, 0xC5, 
	0x82, 0x31, 0xEC, 0x52, 0x8A, 0x19, 0x63, 0xBA, 0xA9, 0x50, 
	0x50, 0x6A, 0x15, 0x91, 0xBE, 0xD6, 0xB4, 0xD2, 0xF6, 0xDD, 
	0xAE, 0xBB, 0xC8, 0x90, 0xD2, 0x60, 0x50, 0x02, 0x08, 0xAD, 
	0x7D, 0xFC, 0xDB, 0xB5, 0xDA, 0x02, 0x80, 0x2F, 0x82, 0x07, 
	0xAB, 0x72, 0xBA, 0xA0, 0x14, 0x16, 0xB8, 0x6C, 0xCC, 0x8A, 
	0xC3, 0x3E, 0x57, 0x84, 0xAC, 0x52, 0x5C, 0x31, 0x86, 0x5D, 
	0x5A, 0x33, 0x95, 0x46, 0x41, 0x26, 0xFD, 0x84, 0x3D, 0x24, 
	0xE4, 0x94, 0x22, 0x4C, 0xDB, 0xEF, 0x09, 0x82, 0x71, 0x86, 
	0x24, 0x84, 0x03, 0x13, 0x00, 0x7C, 0xF9, 0x72, 0x92, 0xCC, 
	0x2D, 0x47, 0xC1, 0x58, 0xEA, 0x50, 0x2F, 0x0A, 0x22, 0x34, 
	0xAD, 0x25, 0x0F, 0xCC, 0xF4, 0xB5, 0x8D, 0x2B, 0x45, 0xD3, 
	0x5A, 0xB6, 0x28, 0x85, 0x12, 0xE1, 0x52, 0xEA, 0x64, 0x5E, 
	0x29, 0xEA, 0x3D, 0x7D, 0x03, 0xAD, 0x69, 0x59, 0x4B, 0x62, 
	0x0C, 0xB7, 0x79, 0x1E, 0xAE, 0xC8, 0xC3, 0x43, 0xB0, 0x7D, 
	0x28, 0x04, 0x10, 0x5A, 0xFB, 0x2F, 0x5F, 0xAF, 0xD5, 0x2A, 
	0x00, 0xE5, 0x34, 0x9C, 0x7B, 0x67, 0x5A, 0x03, 0x25, 0xA5, 
	0xC8, 0x29, 0xC5, 0x74, 0x9F, 0xE0, 0x95, 0x45, 0x98, 0x4B, 
	0x1D, 0xDD, 0xA9, 0x14, 0xE7, 0x8D, 0x21, 0xB6, 0x16, 0x5F, 
	0x84, 0xC5, 0x3E, 0xB2, 0x02, 0xA5, 0x68, 0x25, 0x09, 0x3B, 
	0xB2, 0x59, 0xB2, 0x4A, 0x4D, 0x00, 0x37, 0x0F, 0x6A, 0xFB, 
	0x50, 0x08, 0x00, 0xFE, 0x64, 0x21, 0x49, 0x2E, 0x1F, 0x6B, 
	0xB5, 0x70, 0x45, 0x98, 0x50, 0x8A, 0x4B, 0x7D, 0xC6, 0x17, 
	0x95, 0xA2, 0x6D, 0x2D, 0x1A, 0x56, 0x28, 0xBC, 0x2B, 0x42, 
	0x31, 0x8D, 0x9A, 0x9C, 0x52, 0x8C, 0xA7, 0xBF, 0x2D, 0x88, 
	0xD0, 0xEE, 0xD3, 0x01, 0xAD, 0x14, 0xCD, 0x94, 0xC0, 0x9B, 
	0x3A, 0x3A, 0x70, 0x70, 0x50, 0xC3, 0x87, 0x45, 0x00, 0xA1, 
	0xB5, 0xDF, 0x7A, 0xB6, 0x5A, 0xAD, 0x01, 0x4C, 0x2A, 0xD5, 
	0x0D, 0xE5, 0x65, 0x94, 0xD2, 0x19, 0x0D, 0x44, 0xB8, 0xD8, 
	0xD7, 0x36, 0xA6, 0x54, 0x57, 0x20, 0x77, 0xA4, 0x64, 0x18, 
	0xC0, 0x11, 0x59, 0xA1, 0x03, 0x05, 0xC7, 0x21, 0x4A, 0xFB, 
	0xBD, 0x3F, 0x97, 0x9B, 0x1C, 0x77, 0x9C, 0xDF, 0x18, 0xD4, 
	0xEE, 0xA1, 0x11, 0x00, 0x3C, 0x56, 0x35, 0xE6, 0xE2, 0xB1, 
	0x56, 0x8B, 0x82, 0x52, 0xE4, 0xFA, 0x54, 0xDF, 0x13, 0xC1, 
	0x17, 0x61, 0x54, 0x29, 0x22, 0x58, 0x51, 0x31, 0x96, 0x95, 
	0xA2, 0x91, 0x2E, 0x93, 0x8E, 0x08, 0x5B, 0xB5, 0xE6, 0x4A, 
	0x92, 0x90, 0x13, 0xE9, 0xCE, 0xF8, 0xB2, 0xB1, 0x8E, 0x08, 
	0x91, 0x31, 0xEC, 0xF5, 0x3C, 0x16, 0x93, 0xE4, 0x7D, 0x83, 
	0x1A, 0x3D, 0x4C, 0x02, 0x68, 0x5A, 0xFB, 0xE2, 0x37, 0x6A, 
	0xB5, 0x2A, 0xC0, 0x36, 0xA5, 0x56, 0xCD, 0x74, 0x51, 0x29, 
	0x2A, 0xD6, 0x32, 0xA9, 0x35, 0x97, 0xFB, 0x1C, 0x9B, 0x50, 
	0xAA, 0xAB, 0x05, 0x5B, 0x95, 0x62, 0x31, 0x25, 0xA3, 0xD1, 
	0x97, 0x06, 0x59, 0xAD, 0x89, 0x93, 0x84, 0x2D, 0x99, 0x0C, 
	0x45, 0xAD, 0x7D, 0xE0, 0xAE, 0x41, 0x6C, 0x1E, 0x2A, 0x01, 
	0xC0, 0xA7, 0xAA, 0xC6, 0x9C, 0x79, 0xBD, 0xD5, 0xA2, 0x98, 
	0x46, 0xC1, 0xC5, 0x9E, 0x28, 0x28, 0xA5, 0x05, 0xD1, 0x56, 
	0x11, 0x16, 0xAC, 0xA5, 0xD9, 0x17, 0x05, 0xB3, 0x69, 0x5F, 
	0x05, 0x6C, 0x51, 0x8A, 0x30, 0x2D, 0x7E, 0x7A, 0x91, 0x51, 
	0x8A, 0x28, 0x25, 0xEF, 0xAE, 0x20, 0x08, 0x18, 0x50, 0x07, 
	0x86, 0x4D, 0x00, 0x75, 0x63, 0x0E, 0x7F, 0xB7, 0x5E, 0x9F, 
	0x07, 0xD8, 0xAE, 0x35, 0x17, 0x92, 0x04, 0x93, 0x3A, 0x9A, 
	0x4F, 0xEB, 0x81, 0x79, 0x6B, 0x3B, 0x3A, 0xD1, 0xE3, 0xDC, 
	0x88, 0x52, 0x24, 0xD0, 0x4D, 0x9B, 0x71, 0xAD, 0xA9, 0x5A, 
	0x4B, 0x22, 0x42, 0xD8, 0xD3, 0xAF, 0x97, 0x80, 0xDB, 0x7D, 
	0x9F, 0x51, 0xC7, 0xF9, 0xD8, 0x20, 0xF6, 0x0E, 0x9D, 0x00, 
	0xE0, 0x0F, 0x2F, 0xC6, 0xF1, 0xD2, 0x0B, 0xF5, 0x3A, 0x39, 
	0x11, 0xC6, 0x44, 0xB8, 0xD0, 0xE3, 0xC0, 0x58, 0x2A, 0x6C, 
	0x13, 0x5A, 0x53, 0x35, 0x66, 0xC5, 0xA6, 0x67, 0x5C, 0xA9, 
	0xAE, 0xE8, 0x69, 0x3A, 0x07, 0x22, 0xDA, 0xDA, 0x15, 0xFB, 
	0x0B, 0x27, 0xAD, 0x17, 0xE2, 0x24, 0x61, 0xAF, 0xEF, 0xB3, 
	0x94, 0x24, 0x77, 0x0F, 0x62, 0xEC, 0x46, 0x10, 0x40, 0x68, 
	0xED, 0x33, 0xAF, 0x87, 0xE1, 0x02, 0x74, 0xA2, 0xE0, 0x7C, 
	0x92, 0x74, 0x97, 0xB4, 0x92, 0x52, 0x2C, 0x58, 0x8B, 0x4F, 
	0x67, 0xD6, 0x7B, 0xB5, 0x60, 0x4C, 0xA9, 0x15, 0x4B, 0xE4, 
	0x78, 0x5A, 0xFC, 0xD4, 0xFB, 0xB4, 0xC4, 0xD1, 0x9A, 0xC4, 
	0x18, 0x8A, 0x5A, 0x33, 0xE9, 0x38, 0x06, 0x78, 0x70, 0xBD, 
	0xB6, 0x6E, 0x08, 0x01, 0xC0, 0x1F, 0x2D, 0x57, 0x87, 0x9E, 
	0x08, 0xDB, 0x7B, 0xCA, 0xDC, 0xA2, 0x52, 0xB4, 0x8C, 0x21, 
	0xB4, 0x96, 0xAD, 0xE9, 0x72, 0xB9, 0xEC, 0x72, 0x4E, 0x04, 
	0x05, 0xD4, 0x53, 0xB2, 0x1C, 0xA0, 0xE4, 0x38, 0x44, 0xD6, 
	0xAE, 0xD0, 0x82, 0x8C, 0x52, 0x24, 0xCB, 0xDB, 0xE3, 0x7C, 
	0xBE, 0xC0, 0x00, 0xFB, 0x82, 0x8D, 0x22, 0x80, 0xD0, 0xDA, 
	0x6F, 0x1E, 0x09, 0x43, 0xA0, 0x13, 0x05, 0x4B, 0xD6, 0x76, 
	0x97, 0xBE, 0x40, 0x84, 0x29, 0x63, 0xBA, 0xCB, 0x62, 0xEF, 
	0x72, 0xD9, 0x1F, 0x05, 0x23, 0xA9, 0x6E, 0xB4, 0x7A, 0xD3, 
	0x20, 0x8D, 0x00, 0xE8, 0xE8, 0xC0, 0x88, 0x52, 0x1F, 0x59, 
	0xAF, 0x9D, 0x43, 0x27, 0x20, 0xEF, 0x67, 0x1B, 0x79, 0x37, 
	0xB3, 0xA4, 0xE0, 0xB1, 0x3D, 0x99, 0x0C, 0xD0, 0xC9, 0xE7, 
	0x1B, 0xB4, 0x66, 0x2A, 0x3D, 0xFD, 0x99, 0xD4, 0x9A, 0x38, 
	0x25, 0x63, 0x9B, 0xD6, 0x2B, 0x8A, 0xA6, 0x42, 0x5F, 0x09, 
	0x1C, 0x28, 0x85, 0x16, 0x61, 0xA1, 0xE7, 0xE4, 0xC8, 0x51, 
	0x8A, 0xB8, 0x87, 0x80, 0xAA, 0x31, 0xFB, 0xE9, 0xEC, 0x9F, 
	0xD6, 0x8C, 0x61, 0x13, 0x70, 0xEF, 0x87, 0xEE, 0xBB, 0x25, 
	0xF3, 0xDA, 0xD7, 0x3E, 0x3D, 0x72, 0xE8, 0xF6, 0x1D, 0xD2, 
	0xB6, 0x96, 0x28, 0x75, 0x74, 0x6B, 0x3A, 0x93, 0xB3, 0xC6, 
	0x50, 0x52, 0x8A, 0x25, 0x63, 0x30, 0xD6, 0x92, 0x17, 0xC1, 
	0xED, 0x59, 0x2E, 0x4B, 0x4A, 0x21, 0x22, 0xD4, 0x7A, 0x97, 
	0x4F, 0xAD, 0x57, 0x5D, 0x19, 0x51, 0x22, 0x18, 0x63, 0x70, 
	0x95, 0x62, 0x97, 0xEB, 0x56, 0x58, 0x67, 0x1A, 0x0C, 0x9B, 
	0x80, 0x57, 0xBE, 0xF3, 0x6F, 0x6F, 0xBC, 0x09, 0xF0, 0xFD, 
	0x37, 0x2F, 0x70, 0xB8, 0xD1, 0x08, 0x1F, 0x9F, 0x9B, 0xE3, 
	0x07, 0x8D, 0x06, 0x00, 0x37, 0x3A, 0x0E, 0xE7, 0x92, 0x04, 
	0x4D, 0x67, 0x8B, 0x5C, 0x49, 0xC9, 0xD9, 0xA5, 0x14, 0xE7, 
	0xE3, 0xB8, 0x1B, 0x15, 0xC5, 0xBE, 0x83, 0x95, 0x92, 0xE3, 
	0xE0, 0x29, 0xB5, 0x42, 0x07, 0x94, 0x48, 0x77, 0x79, 0xBD, 
	0x27, 0x9F, 0x2F, 0xB2, 0xCE, 0x7A, 0xE0, 0xDA, 0x0F, 0xEC, 
	0xAF, 0x11, 0x11, 0x04, 0x5F, 0x7B, 0xF1, 0xF5, 0x5F, 0x0E, 
	0x1B, 0xED, 0xCB, 0x0D, 0x6B, 0xEF, 0x6F, 0x58, 0xFB, 0x6A, 
	0xDD, 0xDA, 0x03, 0xBF, 0xE8, 0xFB, 0xBE, 0x97, 0x56, 0x76, 
	0x35, 0x6B, 0xC9, 0xA7, 0x87, 0x1E, 0xA3, 0x4A, 0x75, 0xCF, 
	0x00, 0xE7, 0x8C, 0xA1, 0x9C, 0x46, 0x40, 0xC5, 0x5A, 0xC6, 
	0xB4, 0x46, 0x44, 0x10, 0x11, 0x0A, 0x8E, 0x83, 0x93, 0xB6, 
	0x49, 0x3A, 0xFB, 0x5A, 0xA4, 0xF3, 0xF2, 0x15, 0x38, 0x5A, 
	0xAB, 0x8D, 0x45, 0xD6, 0xFE, 0xDD, 0x5A, 0xED, 0xDD, 0x08, 
	0x11, 0x7C, 0x6A, 0x7A, 0xAE, 0xFA, 0xD1, 0xB6, 0xB5, 0xDB, 
	0x80, 0x37, 0x81, 0xA7, 0xCF, 0xC7, 0x71, 0x78, 0x2A, 0x8A, 
	0x00, 0xB8, 0x51, 0x6B, 0xA6, 0x93, 0x04, 0xAF, 0x2F, 0xCC, 
	0xCB, 0x4A, 0x75, 0x4F, 0x93, 0x0A, 0x40, 0xB3, 0x6F, 0x4B, 
	0xDD, 0x8F, 0xC0, 0x75, 0xC9, 0xA4, 0x1A, 0x73, 0x7B, 0x10, 
	0xD0, 0xB2, 0x76, 0x2F, 0x30, 0xBA, 0x56, 0x63, 0x37, 0x82, 
	0x80, 0x3A, 0xF0, 0xF5, 0xDE, 0x2F, 0xDA, 0xD6, 0xBE, 0xFC, 
	0xCD, 0x6A, 0x75, 0x0E, 0x3A, 0xDB, 0xDF, 0x1D, 0x5A, 0x33, 
	0x1D, 0xC7, 0xD4, 0xA1, 0x5B, 0x08, 0x8D, 0x88, 0xB0, 0x4D, 
	0x29, 0x4E, 0x44, 0x51, 0x67, 0x86, 0x45, 0xBA, 0xFA, 0x71, 
	0x2D, 0xB8, 0xC9, 0xF3, 0xD6, 0xB5, 0x3D, 0xDE, 0xB0, 0x65, 
	0xB0, 0x0F, 0xBF, 0x75, 0x3A, 0x8A, 0xFC, 0x2B, 0xA9, 0xDA, 
	0x6F, 0xD3, 0x1A, 0x23, 0x82, 0xB6, 0xB6, 0xBB, 0xBD, 0x85, 
	0x4E, 0x74, 0x78, 0x22, 0x9C, 0x8C, 0x63, 0xC4, 0x5A, 0x56, 
	0xBF, 0x31, 0xF8, 0xD9, 0xB8, 0x27, 0x9F, 0x1F, 0xE3, 0x7F, 
	0x31, 0x01, 0xA1, 0x81, 0xBF, 0x7D, 0xE6, 0xED, 0x03, 0x64, 
	0x76, 0x6A, 0x4D, 0x0C, 0x98, 0xBE, 0x13, 0xE0, 0x9B, 0x1D, 
	0x87, 0x6D, 0x5A, 0x33, 0xA9, 0x35, 0x81, 0x5C, 0xFB, 0x9B, 
	0xBB, 0x9C, 0x52, 0x8C, 0x39, 0xCE, 0x9A, 0xCB, 0xE2, 0xEB, 
	0x45, 0x00, 0xC0, 0x0B, 0x3F, 0x69, 0xB7, 0xE3, 0x65, 0xA5, 
	0x2F, 0x88, 0xF0, 0x40, 0x36, 0x4B, 0xE1, 0x2A, 0x4E, 0x8E, 
	0x8A, 0x30, 0xB1, 0x86, 0x17, 0xAA, 0x2F, 0x55, 0x2A, 0xFC, 
	0xD3, 0xCC, 0x4C, 0x34, 0x1F, 0xC7, 0x7F, 0xB9, 0x56, 0xA3, 
	0x86, 0xBE, 0x0A, 0xFC, 0x1C, 0x9C, 0x29, 0x6A, 0xFD, 0x41, 
	0x47, 0x64, 0xCF, 0xEE, 0xCC, 0x3B, 0xD7, 0x2C, 0xCB, 0x6A, 
	0xFF, 0xB3, 0x3E, 0x75, 0x63, 0x78, 0x61, 0x69, 0x89, 0xCF, 
	0x5F, 0xBC, 0xD8, 0x7C, 0x2B, 0x0C, 0x5F, 0xAE, 0x1B, 0xF3, 
	0x18, 0xF0, 0xDC, 0x5A, 0x8D, 0xBA, 0xDE, 0x57, 0x65, 0x0F, 
	0x8E, 0x6B, 0xFD, 0xED, 0x27, 0xC6, 0xC7, 0x73, 0xEF, 0xD4, 
	0x51, 0x44, 0xBA, 0x97, 0xA4, 0x44, 0x84, 0x0B, 0x71, 0xCC, 
	0x7F, 0xB7, 0xDB, 0x1C, 0x0B, 0xC3, 0xE9, 0x53, 0xAD, 0x56, 
	0x29, 0x34, 0x66, 0xB6, 0x65, 0xED, 0xB3, 0xC0, 0x77, 0x81, 
	0xEF, 0xAC, 0xD7, 0xA0, 0xEB, 0x7E, 0x57, 0x38, 0x10, 0x39, 
	0x79, 0xA7, 0xE7, 0xED, 0x7D, 0x6F, 0x36, 0x8B, 0xA5, 0x73, 
	0xD5, 0x23, 0xB6, 0x96, 0x88, 0xCE, 0x7B, 0xC4, 0xA6, 0x31, 
	0xCC, 0x24, 0xC9, 0xC5, 0x9A, 0xB5, 0xD9, 0x4A, 0x92, 0xB8, 
	0x73, 0x49, 0xE2, 0x24, 0x10, 0x79, 0x22, 0xE7, 0xEA, 0xC6, 
	0xBC, 0x0C, 0x1C, 0x07, 0x5E, 0x03, 0x7E, 0x44, 0xE7, 0x3A, 
	0xD1, 0x40, 0x78, 0x37, 0x2E, 0x4B, 0xBF, 0x67, 0x4C, 0xEB, 
	0x2F, 0xCE, 0x27, 0xC9, 0x34, 0x74, 0xDF, 0x84, 0x47, 0x74, 
	0x9C, 0x69, 0x00, 0x55, 0x60, 0x91, 0xCE, 0xA5, 0xE9, 0x69, 
	0xE0, 0x02, 0xF0, 0xD3, 0x77, 0xC1, 0xCE, 0x4D, 0x6C, 0x62, 
	0x13, 0x9B, 0xD8, 0xC4, 0x26, 0x36, 0xB1, 0x89, 0xFF, 0xDB, 
	0xF8, 0x1F, 0x81, 0x45, 0x39, 0x6F, 0xDD, 0x9C, 0x23, 0x55, 
	0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4E, 0x44, 0xAE, 0x42, 
	0x60, 0x82, 
};

wxBitmap& log_png_to_wx_bitmap()
{
	static wxMemoryInputStream memIStream( log_png, sizeof( log_png ) );
	static wxImage image( memIStream, wxBITMAP_TYPE_PNG );
	static wxBitmap bmp( image );
	return bmp;
}


#endif //LOG_PNG_H
