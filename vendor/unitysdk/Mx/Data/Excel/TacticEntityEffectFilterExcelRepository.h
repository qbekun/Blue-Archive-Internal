#pragma once
#include "../../../unitysdk.h"

#define MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCELREPOSITORY_SELECTFIRST_TARGETEFFECTNAME_OFFSET UNITYSDK_OFFSET(0x1C9C4C0)
#define MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCELREPOSITORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x1C9C7D0)
#define MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCELREPOSITORY_CACHE_OFFSET UNITYSDK_OFFSET(0x1C9C810)
#define MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCELREPOSITORY_SELECT_TARGETEFFECTNAME_OFFSET UNITYSDK_OFFSET(0x1C9C980)
#define MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCELREPOSITORY_SELECT_TARGETEFFECTNAMES_OFFSET UNITYSDK_OFFSET(0x1C9CC70)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int TacticEntityEffectFilterExcelRepository_TypeDefinitionIndex = 19578;

	class TacticEntityEffectFilterExcelRepository : public ::MXUnderCover::UCSectionVisual
	{
	public:
		Il2CppObject* SelectFirst_TargetEffectName(::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCELREPOSITORY_SELECTFIRST_TARGETEFFECTNAME_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCELREPOSITORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Cache(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCELREPOSITORY_CACHE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Select_TargetEffectName(::System::String* str, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCELREPOSITORY_SELECT_TARGETEFFECTNAME_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* Select_TargetEffectNames(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_TACTICENTITYEFFECTFILTEREXCELREPOSITORY_SELECT_TARGETEFFECTNAMES_OFFSET))(arg, arg, nullptr);
		}

	};
}

