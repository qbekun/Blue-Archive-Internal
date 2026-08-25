#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class EchelonType; }

#define MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCELREPOSITORY_SELECT_CONTENTS_OFFSET UNITYSDK_OFFSET(0x19D8050)
#define MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x19D83A0)
#define MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCELREPOSITORY_SELECT_CONTENTSS_OFFSET UNITYSDK_OFFSET(0x19D83E0)
#define MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x19D87E0)
#define MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCELREPOSITORY_SELECTFIRST_CONTENTS_OFFSET UNITYSDK_OFFSET(0x19D8950)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int AssistEchelonTypeConvertExcelRepository_TypeDefinitionIndex = 16688;

	class AssistEchelonTypeConvertExcelRepository : public ::FlatData::DreamMakerMultiplierCondition
	{
	public:
		Il2CppObject* Select_Contents(::FlatData::EchelonType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::EchelonType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCELREPOSITORY_SELECT_CONTENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Select_Contentss(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCELREPOSITORY_SELECT_CONTENTSS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SelectFirst_Contents(::FlatData::EchelonType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::EchelonType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ASSISTECHELONTYPECONVERTEXCELREPOSITORY_SELECTFIRST_CONTENTS_OFFSET))(arg, arg, nullptr);
		}

	};
}

