#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::KPI { class NXPKpiData; }

#define NPA_EDITOR_KPI_NXPKPIDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9C39170)
#define NPA_EDITOR_KPI_NXPKPIDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C39D70)

namespace NPA::Editor::KPI
{
	inline static constexpr unsigned int NXPKpiData_TypeDefinitionIndex = 26788;

	class NXPKpiData : public Il2CppObject
	{
	public:
		::System::String* guid; // 0x10
		::System::String* gameToken; // 0x18
		::System::String* worldId; // 0x20
		::System::String* signupCountryCode; // 0x28
		::System::String* additionalProperties; // 0x30

		::NPA::Editor::KPI::NXPKpiData* Create(::System::Boolean arg)
		{
			return (return (::NPA::Editor::KPI::NXPKpiData*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_KPI_NXPKPIDATA_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_KPI_NXPKPIDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

