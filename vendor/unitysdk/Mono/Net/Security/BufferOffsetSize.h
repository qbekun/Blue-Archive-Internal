#pragma once
#include "../../../unitysdk.h"

#define MONO_NET_SECURITY_BUFFEROFFSETSIZE_GET_ENDOFFSET_OFFSET UNITYSDK_OFFSET(0x96D0BF0)
#define MONO_NET_SECURITY_BUFFEROFFSETSIZE_GET_REMAINING_OFFSET UNITYSDK_OFFSET(0x96D0C00)
#define MONO_NET_SECURITY_BUFFEROFFSETSIZE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96D0C30)
#define MONO_NET_SECURITY_BUFFEROFFSETSIZE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x96D0D40)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int BufferOffsetSize_TypeDefinitionIndex = 29053;

	class BufferOffsetSize : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Buffer; // 0x10
		::System::Int32 Offset; // 0x18
		::System::Int32 Size; // 0x1C
		::System::Int32 TotalBytes; // 0x20
		::System::Boolean Complete; // 0x24

		::System::Int32 get_EndOffset()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_BUFFEROFFSETSIZE_GET_ENDOFFSET_OFFSET))(nullptr);
		}

		::System::Int32 get_Remaining()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_BUFFEROFFSETSIZE_GET_REMAINING_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_BUFFEROFFSETSIZE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_BUFFEROFFSETSIZE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

