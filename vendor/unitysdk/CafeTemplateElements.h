#pragma once
#include "unitysdk.h"

#define CAFETEMPLATEELEMENTS_GET_UNITS_OFFSET UNITYSDK_OFFSET(0x2267400)
#define CAFETEMPLATEELEMENTS_SETDATA_OFFSET UNITYSDK_OFFSET(0x22674B0)
#define CAFETEMPLATEELEMENTS_GET_UNITCOUNT_OFFSET UNITYSDK_OFFSET(0x22670E0)
#define CAFETEMPLATEELEMENTS_.CTOR_OFFSET UNITYSDK_OFFSET(0x2267670)

	inline static constexpr unsigned int CafeTemplateElements_TypeDefinitionIndex = 4595;

	class CafeTemplateElements : public <>c__DisplayClass4_0
	{
	public:
		Il2CppObject* _units; // 0x28

		Il2CppObject* get_Units()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETEMPLATEELEMENTS_GET_UNITS_OFFSET))(nullptr);
		}

		::System::Void SetData(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CAFETEMPLATEELEMENTS_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_UnitCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETEMPLATEELEMENTS_GET_UNITCOUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETEMPLATEELEMENTS_.CTOR_OFFSET))(nullptr);
		}

	};

