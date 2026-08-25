#pragma once
#include "../../../unitysdk.h"

namespace Mono::Net::Security { class BufferOffsetSize; }
namespace Mono::Net::Security { class MobileAuthenticatedStream; }

#define MONO_NET_SECURITY_ASYNCREADORWRITEREQUEST_GET_USERBUFFER_OFFSET UNITYSDK_OFFSET(0x96D2CC0)
#define MONO_NET_SECURITY_ASYNCREADORWRITEREQUEST_GET_CURRENTSIZE_OFFSET UNITYSDK_OFFSET(0x96D2CD0)
#define MONO_NET_SECURITY_ASYNCREADORWRITEREQUEST_SET_CURRENTSIZE_OFFSET UNITYSDK_OFFSET(0x96D2CE0)
#define MONO_NET_SECURITY_ASYNCREADORWRITEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x96D2CF0)
#define MONO_NET_SECURITY_ASYNCREADORWRITEREQUEST_TOSTRING_OFFSET UNITYSDK_OFFSET(0x96D2D90)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int AsyncReadOrWriteRequest_TypeDefinitionIndex = 29062;

	class AsyncReadOrWriteRequest : public ::Unity::Burst::Intrinsics::DoSetCSRTrampoline_00000127$PostfixBurstDelegate
	{
	public:
		::Mono::Net::Security::BufferOffsetSize* _UserBuffer_k__BackingField; // 0x38
		::System::Int32 _CurrentSize_k__BackingField; // 0x40

		::Mono::Net::Security::BufferOffsetSize* get_UserBuffer()
		{
			return (return (::Mono::Net::Security::BufferOffsetSize*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCREADORWRITEREQUEST_GET_USERBUFFER_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCREADORWRITEREQUEST_GET_CURRENTSIZE_OFFSET))(nullptr);
		}

		::System::Void set_CurrentSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCREADORWRITEREQUEST_SET_CURRENTSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Mono::Net::Security::MobileAuthenticatedStream* arg, ::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Mono::Net::Security::MobileAuthenticatedStream*, ::System::Boolean, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCREADORWRITEREQUEST_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCREADORWRITEREQUEST_TOSTRING_OFFSET))(nullptr);
		}

	};
}

