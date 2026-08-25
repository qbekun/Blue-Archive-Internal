#pragma once
#include "unitysdk.h"

namespace BestHTTP::Decompression::Zlib { class BlockState; }
namespace BestHTTP::Decompression::Zlib { class FlushType; }

#define COMPRESSFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8DEAC0)
#define COMPRESSFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8DEAF0)
#define COMPRESSFUNC_.CTOR_OFFSET UNITYSDK_OFFSET(0x8DD710)
#define COMPRESSFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x8DEB60)

	inline static constexpr unsigned int CompressFunc_TypeDefinitionIndex = 23364;

	class CompressFunc : public Il2CppObject
	{
	public:
		::BestHTTP::Decompression::Zlib::BlockState* EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::BestHTTP::Decompression::Zlib::BlockState*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + COMPRESSFUNC_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::BestHTTP::Decompression::Zlib::FlushType* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::BestHTTP::Decompression::Zlib::FlushType*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + COMPRESSFUNC_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + COMPRESSFUNC_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::Decompression::Zlib::BlockState* Invoke(::BestHTTP::Decompression::Zlib::FlushType* arg)
		{
			return (return (::BestHTTP::Decompression::Zlib::BlockState*(*)(::BestHTTP::Decompression::Zlib::FlushType*, ::PVOID))((::PBYTE)hIl2Cpp + COMPRESSFUNC_INVOKE_OFFSET))(arg, nullptr);
		}

	};

