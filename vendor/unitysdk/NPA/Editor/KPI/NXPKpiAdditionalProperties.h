#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::KPI { class NXPKpiAdditionalProperties; }

#define NPA_EDITOR_KPI_NXPKPIADDITIONALPROPERTIES_CREATE_OFFSET UNITYSDK_OFFSET(0x9C39310)
#define NPA_EDITOR_KPI_NXPKPIADDITIONALPROPERTIES_TOJSONSTRING_OFFSET UNITYSDK_OFFSET(0x9C39A30)
#define NPA_EDITOR_KPI_NXPKPIADDITIONALPROPERTIES_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C39A20)

namespace NPA::Editor::KPI
{
	inline static constexpr unsigned int NXPKpiAdditionalProperties_TypeDefinitionIndex = 26787;

	class NXPKpiAdditionalProperties : public Il2CppObject
	{
	public:
		::System::String* instanceId; // 0x10
		::System::Boolean isKeepAlive; // 0x18
		::System::String* characterId; // 0x20
		::System::String* gameServerId; // 0x28
		::System::String* channelId; // 0x30
		::System::String* osVersion; // 0x38
		::System::Int32 memberType; // 0x40
		::System::String* platformUserId; // 0x48
		::System::String* countryCode; // 0x50
		::System::String* language; // 0x58
		::System::String* serviceId; // 0x60
		::System::String* appId; // 0x68
		::System::String* uuid; // 0x70
		::System::String* uuid2; // 0x78
		::System::String* idfv; // 0x80
		::System::String* adid; // 0x88

		::NPA::Editor::KPI::NXPKpiAdditionalProperties* Create(::System::Boolean arg)
		{
			return (return (::NPA::Editor::KPI::NXPKpiAdditionalProperties*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_KPI_NXPKPIADDITIONALPROPERTIES_CREATE_OFFSET))(arg, nullptr);
		}

		::System::String* ToJsonString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_KPI_NXPKPIADDITIONALPROPERTIES_TOJSONSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_KPI_NXPKPIADDITIONALPROPERTIES_.CTOR_OFFSET))(nullptr);
		}

	};
}

