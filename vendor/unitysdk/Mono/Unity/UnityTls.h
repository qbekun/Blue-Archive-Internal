#pragma once
#include "../../unitysdk.h"

#define MONO_UNITY_UNITYTLS_GETUNITYTLSINTERFACE_OFFSET UNITYSDK_OFFSET(0x96C9D10)
#define MONO_UNITY_UNITYTLS_GET_ISSUPPORTED_OFFSET UNITYSDK_OFFSET(0x96C9D20)
#define MONO_UNITY_UNITYTLS_GET_NATIVEINTERFACE_OFFSET UNITYSDK_OFFSET(0x96C99C0)

namespace Mono::Unity
{
	inline static constexpr unsigned int UnityTls_TypeDefinitionIndex = 29047;

	class UnityTls : public Il2CppObject
	{
	public:
		unitytls_interface_struct* marshalledInterface; // 0x0

		::System::Int32 GetUnityTlsInterface()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_GETUNITYTLSINTERFACE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSupported()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_GET_ISSUPPORTED_OFFSET))(nullptr);
		}

		unitytls_interface_struct* get_NativeInterface()
		{
			return (return (unitytls_interface_struct*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_UNITYTLS_GET_NATIVEINTERFACE_OFFSET))(nullptr);
		}

	};
}

