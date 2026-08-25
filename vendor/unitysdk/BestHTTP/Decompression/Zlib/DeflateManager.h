#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Decompression::Zlib { class ZlibCodec; }
namespace BestHTTP::Decompression::Zlib { class CompressionLevel; }
namespace BestHTTP::Decompression::Zlib { class CompressionStrategy; }
namespace BestHTTP::Decompression::Zlib { class ZTree; }
namespace BestHTTP::Decompression::Zlib { class BlockState; }
namespace BestHTTP::Decompression::Zlib { class FlushType; }

#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x8D8B00)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER__INITIALIZELAZYMATCH_OFFSET UNITYSDK_OFFSET(0x8D8DB0)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER__INITIALIZETREEDATA_OFFSET UNITYSDK_OFFSET(0x8D90D0)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER__INITIALIZEBLOCKS_OFFSET UNITYSDK_OFFSET(0x8D9230)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_PQDOWNHEAP_OFFSET UNITYSDK_OFFSET(0x8D9430)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER__ISSMALLER_OFFSET UNITYSDK_OFFSET(0x8D95F0)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_SCAN_TREE_OFFSET UNITYSDK_OFFSET(0x8D9670)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_BUILD_BL_TREE_OFFSET UNITYSDK_OFFSET(0x8D98D0)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_SEND_ALL_TREES_OFFSET UNITYSDK_OFFSET(0x8D9AA0)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_SEND_TREE_OFFSET UNITYSDK_OFFSET(0x8D9D00)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_PUT_BYTES_OFFSET UNITYSDK_OFFSET(0x8DA220)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_SEND_CODE_OFFSET UNITYSDK_OFFSET(0x8DA1D0)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_SEND_BITS_OFFSET UNITYSDK_OFFSET(0x8D9BD0)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER__TR_ALIGN_OFFSET UNITYSDK_OFFSET(0x8DA260)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER__TR_TALLY_OFFSET UNITYSDK_OFFSET(0x8DA510)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_SEND_COMPRESSED_BLOCK_OFFSET UNITYSDK_OFFSET(0x8DA840)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_SET_DATA_TYPE_OFFSET UNITYSDK_OFFSET(0x8DAC10)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_BI_FLUSH_OFFSET UNITYSDK_OFFSET(0x8DA420)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_BI_WINDUP_OFFSET UNITYSDK_OFFSET(0x8DAFA0)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_COPY_BLOCK_OFFSET UNITYSDK_OFFSET(0x8DB050)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_FLUSH_BLOCK_ONLY_OFFSET UNITYSDK_OFFSET(0x8DB140)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_DEFLATENONE_OFFSET UNITYSDK_OFFSET(0x8DB4C0)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER__TR_STORED_BLOCK_OFFSET UNITYSDK_OFFSET(0x8DBAD0)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER__TR_FLUSH_BLOCK_OFFSET UNITYSDK_OFFSET(0x8DB1B0)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER__FILLWINDOW_OFFSET UNITYSDK_OFFSET(0x8DB760)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_DEFLATEFAST_OFFSET UNITYSDK_OFFSET(0x8DBB80)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_DEFLATESLOW_OFFSET UNITYSDK_OFFSET(0x8DC780)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_LONGEST_MATCH_OFFSET UNITYSDK_OFFSET(0x8DC1D0)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_GET_WANTRFC1950HEADERBYTES_OFFSET UNITYSDK_OFFSET(0x8DCF40)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_SET_WANTRFC1950HEADERBYTES_OFFSET UNITYSDK_OFFSET(0x8DCF50)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x8DCF60)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x8DCFE0)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x8DD3A0)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x8DD060)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0x8DD430)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_END_OFFSET UNITYSDK_OFFSET(0x8DD570)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_SETDEFLATER_OFFSET UNITYSDK_OFFSET(0x8D8FD0)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_SETPARAMS_OFFSET UNITYSDK_OFFSET(0x8DD7E0)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_SETDICTIONARY_OFFSET UNITYSDK_OFFSET(0x8DD940)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_DEFLATE_OFFSET UNITYSDK_OFFSET(0x8DDC50)
#define BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8DE550)

namespace BestHTTP::Decompression::Zlib
{
	inline static constexpr unsigned int DeflateManager_TypeDefinitionIndex = 23366;

	class DeflateManager : public Il2CppObject
	{
	public:
		::System::Int32 MEM_LEVEL_MAX; // 0x0
		::System::Int32 MEM_LEVEL_DEFAULT; // 0x4
		CompressFunc* DeflateFunction; // 0x10
		::Il2CppArray<::System::Object*>* _ErrorMessage; // 0x8
		::System::Int32 PRESET_DICT; // 0x10
		::System::Int32 INIT_STATE; // 0x14
		::System::Int32 BUSY_STATE; // 0x18
		::System::Int32 FINISH_STATE; // 0x1C
		::System::Int32 Z_DEFLATED; // 0x20
		::System::Int32 STORED_BLOCK; // 0x24
		::System::Int32 STATIC_TREES; // 0x28
		::System::Int32 DYN_TREES; // 0x2C
		::System::Int32 Z_BINARY; // 0x30
		::System::Int32 Z_ASCII; // 0x34
		::System::Int32 Z_UNKNOWN; // 0x38
		::System::Int32 Buf_size; // 0x3C
		::System::Int32 MIN_MATCH; // 0x40
		::System::Int32 MAX_MATCH; // 0x44
		::System::Int32 MIN_LOOKAHEAD; // 0x48
		::System::Int32 HEAP_SIZE; // 0x4C
		::System::Int32 END_BLOCK; // 0x50
		::BestHTTP::Decompression::Zlib::ZlibCodec* _codec; // 0x18
		::System::Int32 status; // 0x20
		::Il2CppArray<::System::Object*>* pending; // 0x28
		::System::Int32 nextPending; // 0x30
		::System::Int32 pendingCount; // 0x34
		::System::SByte data_type; // 0x38
		::System::Int32 last_flush; // 0x3C
		::System::Int32 w_size; // 0x40
		::System::Int32 w_bits; // 0x44
		::System::Int32 w_mask; // 0x48
		::Il2CppArray<::System::Object*>* window; // 0x50
		::System::Int32 window_size; // 0x58
		::Il2CppArray<::System::Object*>* prev; // 0x60
		::Il2CppArray<::System::Object*>* head; // 0x68
		::System::Int32 ins_h; // 0x70
		::System::Int32 hash_size; // 0x74
		::System::Int32 hash_bits; // 0x78
		::System::Int32 hash_mask; // 0x7C
		::System::Int32 hash_shift; // 0x80
		::System::Int32 block_start; // 0x84
		Config* config; // 0x88
		::System::Int32 match_length; // 0x90
		::System::Int32 prev_match; // 0x94
		::System::Int32 match_available; // 0x98
		::System::Int32 strstart; // 0x9C
		::System::Int32 match_start; // 0xA0
		::System::Int32 lookahead; // 0xA4
		::System::Int32 prev_length; // 0xA8
		::BestHTTP::Decompression::Zlib::CompressionLevel* compressionLevel; // 0xAC
		::BestHTTP::Decompression::Zlib::CompressionStrategy* compressionStrategy; // 0xB0
		::Il2CppArray<::System::Object*>* dyn_ltree; // 0xB8
		::Il2CppArray<::System::Object*>* dyn_dtree; // 0xC0
		::Il2CppArray<::System::Object*>* bl_tree; // 0xC8
		::BestHTTP::Decompression::Zlib::ZTree* treeLiterals; // 0xD0
		::BestHTTP::Decompression::Zlib::ZTree* treeDistances; // 0xD8
		::BestHTTP::Decompression::Zlib::ZTree* treeBitLengths; // 0xE0
		::Il2CppArray<::System::Object*>* bl_count; // 0xE8
		::Il2CppArray<::System::Object*>* heap; // 0xF0
		::System::Int32 heap_len; // 0xF8
		::System::Int32 heap_max; // 0xFC
		::Il2CppArray<::System::Object*>* depth; // 0x100
		::System::Int32 _lengthOffset; // 0x108
		::System::Int32 lit_bufsize; // 0x10C
		::System::Int32 last_lit; // 0x110
		::System::Int32 _distanceOffset; // 0x114
		::System::Int32 opt_len; // 0x118
		::System::Int32 static_len; // 0x11C
		::System::Int32 matches; // 0x120
		::System::Int32 last_eob_len; // 0x124
		::System::Int16 bi_buf; // 0x128
		::System::Int32 bi_valid; // 0x12C
		::System::Boolean Rfc1950BytesEmitted; // 0x130
		::System::Boolean _WantRfc1950HeaderBytes; // 0x131

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _InitializeLazyMatch()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER__INITIALIZELAZYMATCH_OFFSET))(nullptr);
		}

		::System::Void _InitializeTreeData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER__INITIALIZETREEDATA_OFFSET))(nullptr);
		}

		::System::Void _InitializeBlocks()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER__INITIALIZEBLOCKS_OFFSET))(nullptr);
		}

		::System::Void pqdownheap(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_PQDOWNHEAP_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean _IsSmaller(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER__ISSMALLER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void scan_tree(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_SCAN_TREE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 build_bl_tree()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_BUILD_BL_TREE_OFFSET))(nullptr);
		}

		::System::Void send_all_trees(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_SEND_ALL_TREES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void send_tree(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_SEND_TREE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void put_bytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_PUT_BYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void send_code(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_SEND_CODE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void send_bits(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_SEND_BITS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void _tr_align()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER__TR_ALIGN_OFFSET))(nullptr);
		}

		::System::Boolean _tr_tally(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER__TR_TALLY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void send_compressed_block(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_SEND_COMPRESSED_BLOCK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_data_type()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_SET_DATA_TYPE_OFFSET))(nullptr);
		}

		::System::Void bi_flush()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_BI_FLUSH_OFFSET))(nullptr);
		}

		::System::Void bi_windup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_BI_WINDUP_OFFSET))(nullptr);
		}

		::System::Void copy_block(::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_COPY_BLOCK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void flush_block_only(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_FLUSH_BLOCK_ONLY_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Decompression::Zlib::BlockState* DeflateNone(::BestHTTP::Decompression::Zlib::FlushType* arg)
		{
			return (return (::BestHTTP::Decompression::Zlib::BlockState*(*)(::BestHTTP::Decompression::Zlib::FlushType*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_DEFLATENONE_OFFSET))(arg, nullptr);
		}

		::System::Void _tr_stored_block(::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER__TR_STORED_BLOCK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void _tr_flush_block(::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER__TR_FLUSH_BLOCK_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void _fillWindow()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER__FILLWINDOW_OFFSET))(nullptr);
		}

		::BestHTTP::Decompression::Zlib::BlockState* DeflateFast(::BestHTTP::Decompression::Zlib::FlushType* arg)
		{
			return (return (::BestHTTP::Decompression::Zlib::BlockState*(*)(::BestHTTP::Decompression::Zlib::FlushType*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_DEFLATEFAST_OFFSET))(arg, nullptr);
		}

		::BestHTTP::Decompression::Zlib::BlockState* DeflateSlow(::BestHTTP::Decompression::Zlib::FlushType* arg)
		{
			return (return (::BestHTTP::Decompression::Zlib::BlockState*(*)(::BestHTTP::Decompression::Zlib::FlushType*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_DEFLATESLOW_OFFSET))(arg, nullptr);
		}

		::System::Int32 longest_match(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_LONGEST_MATCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_WantRfc1950HeaderBytes()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_GET_WANTRFC1950HEADERBYTES_OFFSET))(nullptr);
		}

		::System::Void set_WantRfc1950HeaderBytes(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_SET_WANTRFC1950HEADERBYTES_OFFSET))(arg, nullptr);
		}

		::System::Int32 Initialize(::BestHTTP::Decompression::Zlib::ZlibCodec* arg, ::BestHTTP::Decompression::Zlib::CompressionLevel* arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::Decompression::Zlib::ZlibCodec*, ::BestHTTP::Decompression::Zlib::CompressionLevel*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_INITIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Initialize(::BestHTTP::Decompression::Zlib::ZlibCodec* arg, ::BestHTTP::Decompression::Zlib::CompressionLevel* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::Decompression::Zlib::ZlibCodec*, ::BestHTTP::Decompression::Zlib::CompressionLevel*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_INITIALIZE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 Initialize(::BestHTTP::Decompression::Zlib::ZlibCodec* arg, ::BestHTTP::Decompression::Zlib::CompressionLevel* arg, ::System::Int32 arg, ::BestHTTP::Decompression::Zlib::CompressionStrategy* arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::Decompression::Zlib::ZlibCodec*, ::BestHTTP::Decompression::Zlib::CompressionLevel*, ::System::Int32, ::BestHTTP::Decompression::Zlib::CompressionStrategy*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_INITIALIZE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Initialize(::BestHTTP::Decompression::Zlib::ZlibCodec* arg, ::BestHTTP::Decompression::Zlib::CompressionLevel* arg, ::System::Int32 arg, ::System::Int32 arg, ::BestHTTP::Decompression::Zlib::CompressionStrategy* arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::Decompression::Zlib::ZlibCodec*, ::BestHTTP::Decompression::Zlib::CompressionLevel*, ::System::Int32, ::System::Int32, ::BestHTTP::Decompression::Zlib::CompressionStrategy*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_INITIALIZE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_RESET_OFFSET))(nullptr);
		}

		::System::Int32 End()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_END_OFFSET))(nullptr);
		}

		::System::Void SetDeflater()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_SETDEFLATER_OFFSET))(nullptr);
		}

		::System::Int32 SetParams(::BestHTTP::Decompression::Zlib::CompressionLevel* arg, ::BestHTTP::Decompression::Zlib::CompressionStrategy* arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::Decompression::Zlib::CompressionLevel*, ::BestHTTP::Decompression::Zlib::CompressionStrategy*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_SETPARAMS_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 SetDictionary(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_SETDICTIONARY_OFFSET))(arg, nullptr);
		}

		::System::Int32 Deflate(::BestHTTP::Decompression::Zlib::FlushType* arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::Decompression::Zlib::FlushType*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_DEFLATE_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_DEFLATEMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

