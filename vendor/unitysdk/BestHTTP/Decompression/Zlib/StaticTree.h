#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::Decompression::Zlib { class StaticTree; }

#define BESTHTTP_DECOMPRESSION_ZLIB_STATICTREE_.CTOR_OFFSET UNITYSDK_OFFSET(0x8E6CE0)
#define BESTHTTP_DECOMPRESSION_ZLIB_STATICTREE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x8E6D50)

namespace BestHTTP::Decompression::Zlib
{
	inline static constexpr unsigned int StaticTree_TypeDefinitionIndex = 23383;

	class StaticTree : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* lengthAndLiteralsTreeCodes; // 0x0
		::Il2CppArray<::System::Object*>* distTreeCodes; // 0x8
		::BestHTTP::Decompression::Zlib::StaticTree* Literals; // 0x10
		::BestHTTP::Decompression::Zlib::StaticTree* Distances; // 0x18
		::BestHTTP::Decompression::Zlib::StaticTree* BitLengths; // 0x20
		::Il2CppArray<::System::Object*>* treeCodes; // 0x10
		::Il2CppArray<::System::Object*>* extraBits; // 0x18
		::System::Int32 extraBase; // 0x20
		::System::Int32 elems; // 0x24
		::System::Int32 maxLength; // 0x28

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_STATICTREE_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_DECOMPRESSION_ZLIB_STATICTREE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

