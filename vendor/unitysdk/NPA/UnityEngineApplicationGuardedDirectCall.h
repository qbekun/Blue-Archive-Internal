#pragma once
#include "../unitysdk.h"

#define NPA_UNITYENGINEAPPLICATIONGUARDEDDIRECTCALL_GETUNITYVERSION_OFFSET UNITYSDK_OFFSET(0x9BC0970)
#define NPA_UNITYENGINEAPPLICATIONGUARDEDDIRECTCALL_GETDATAPATH_OFFSET UNITYSDK_OFFSET(0x9BC0A30)
#define NPA_UNITYENGINEAPPLICATIONGUARDEDDIRECTCALL_ISEDITOR_OFFSET UNITYSDK_OFFSET(0x9BC0AF0)
#define NPA_UNITYENGINEAPPLICATIONGUARDEDDIRECTCALL_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BC0BA0)

namespace NPA
{
	inline static constexpr unsigned int UnityEngineApplicationGuardedDirectCall_TypeDefinitionIndex = 25558;

	class UnityEngineApplicationGuardedDirectCall : public Il2CppObject
	{
	public:
		::System::String* GetUnityVersion()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_UNITYENGINEAPPLICATIONGUARDEDDIRECTCALL_GETUNITYVERSION_OFFSET))(nullptr);
		}

		::System::String* GetDataPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_UNITYENGINEAPPLICATIONGUARDEDDIRECTCALL_GETDATAPATH_OFFSET))(nullptr);
		}

		::System::Boolean IsEditor()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_UNITYENGINEAPPLICATIONGUARDEDDIRECTCALL_ISEDITOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_UNITYENGINEAPPLICATIONGUARDEDDIRECTCALL_.CTOR_OFFSET))(nullptr);
		}

	};
}

