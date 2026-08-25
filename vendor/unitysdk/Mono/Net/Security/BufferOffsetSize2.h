#pragma once
#include "../../../unitysdk.h"

#define MONO_NET_SECURITY_BUFFEROFFSETSIZE2_.CTOR_OFFSET UNITYSDK_OFFSET(0x96D0DD0)
#define MONO_NET_SECURITY_BUFFEROFFSETSIZE2_RESET_OFFSET UNITYSDK_OFFSET(0x96D0E20)
#define MONO_NET_SECURITY_BUFFEROFFSETSIZE2_MAKEROOM_OFFSET UNITYSDK_OFFSET(0x96D0E80)
#define MONO_NET_SECURITY_BUFFEROFFSETSIZE2_APPENDDATA_OFFSET UNITYSDK_OFFSET(0x96D0F30)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int BufferOffsetSize2_TypeDefinitionIndex = 29054;

	class BufferOffsetSize2 : public Il2CppObject
	{
	public:
		::System::Int32 InitialSize; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_BUFFEROFFSETSIZE2_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_BUFFEROFFSETSIZE2_RESET_OFFSET))(nullptr);
		}

		::System::Void MakeRoom(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_BUFFEROFFSETSIZE2_MAKEROOM_OFFSET))(arg, nullptr);
		}

		::System::Void AppendData(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_BUFFEROFFSETSIZE2_APPENDDATA_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

