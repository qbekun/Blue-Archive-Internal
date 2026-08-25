#pragma once
#include "unitysdk.h"

#define CAFETEMPLATELISTELEMENT_GET_UNITS_OFFSET UNITYSDK_OFFSET(0x22681E0)
#define CAFETEMPLATELISTELEMENT_GET_UNITCOUNT_OFFSET UNITYSDK_OFFSET(0x2268130)
#define CAFETEMPLATELISTELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x2268240)
#define CAFETEMPLATELISTELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2268A00)

	inline static constexpr unsigned int CafeTemplateListElement_TypeDefinitionIndex = 4600;

	class CafeTemplateListElement : public ::System::Xml::XmlConvert
	{
	public:
		::Il2CppArray<::System::Object*>* _units; // 0x28

		::Il2CppArray<::System::Object*>* get_Units()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETEMPLATELISTELEMENT_GET_UNITS_OFFSET))(nullptr);
		}

		::System::Int32 get_UnitCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETEMPLATELISTELEMENT_GET_UNITCOUNT_OFFSET))(nullptr);
		}

		::System::Void SetData(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CAFETEMPLATELISTELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFETEMPLATELISTELEMENT_.CTOR_OFFSET))(nullptr);
		}

	};

