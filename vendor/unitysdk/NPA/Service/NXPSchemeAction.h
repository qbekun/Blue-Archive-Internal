#pragma once
#include "../../unitysdk.h"

#define NPA_SERVICE_NXPSCHEMEACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC4AD0)
#define NPA_SERVICE_NXPSCHEMEACTION_GET_SCHEME_OFFSET UNITYSDK_OFFSET(0x9CC4B20)
#define NPA_SERVICE_NXPSCHEMEACTION_GET_SCHEMEACTION_OFFSET UNITYSDK_OFFSET(0x9CC4B30)
#define NPA_SERVICE_NXPSCHEMEACTION_SET_SCHEMEACTION_OFFSET UNITYSDK_OFFSET(0x9CC4B40)
#define NPA_SERVICE_NXPSCHEMEACTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CC4B50)

namespace NPA::Service
{
	inline static constexpr unsigned int NXPSchemeAction_TypeDefinitionIndex = 27293;

	class NXPSchemeAction : public Il2CppObject
	{
	public:
		::System::String* scheme; // 0x10
		Il2CppObject* schemeAction; // 0x18

		::System::Void .ctor(::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPSCHEMEACTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_Scheme()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPSCHEMEACTION_GET_SCHEME_OFFSET))(nullptr);
		}

		Il2CppObject* get_SchemeAction()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPSCHEMEACTION_GET_SCHEMEACTION_OFFSET))(nullptr);
		}

		::System::Void set_SchemeAction(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPSCHEMEACTION_SET_SCHEMEACTION_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SERVICE_NXPSCHEMEACTION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

