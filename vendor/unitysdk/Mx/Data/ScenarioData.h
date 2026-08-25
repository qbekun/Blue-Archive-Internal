#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class ScenarioTransitionExcel&; }
namespace FlatData { class ScenarioCharacterShapes; }
namespace MX::Data::Excel { class ScenarioBGNameExcel&; }
namespace MX::Data::Excel { class ScenarioEffectExcel&; }
namespace MX::Data::Excel { class ScenarioBGEffectExcel&; }
namespace MX::Data::Excel { class ScenarioCharacterNameExcel&; }

#define MX_DATA_SCENARIODATA_GETSCENARIOGROUP_OFFSET UNITYSDK_OFFSET(0x19335A0)
#define MX_DATA_SCENARIODATA_HASSITUATIONINFO_OFFSET UNITYSDK_OFFSET(0x1933870)
#define MX_DATA_SCENARIODATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x19338F0)
#define MX_DATA_SCENARIODATA_GETSCENARIOSCRIPTEXCELS_OFFSET UNITYSDK_OFFSET(0x19339C0)
#define MX_DATA_SCENARIODATA_TRYGETBGEFFECTEXCELSALL_OFFSET UNITYSDK_OFFSET(0x1933A40)
#define MX_DATA_SCENARIODATA_TRYGETTRANSITION_OFFSET UNITYSDK_OFFSET(0x1933C80)
#define MX_DATA_SCENARIODATA_TRYGETSITUATIONINFO_OFFSET UNITYSDK_OFFSET(0x1933D30)
#define MX_DATA_SCENARIODATA_GETSCENARIOBGNAMEEXCELSALL_OFFSET UNITYSDK_OFFSET(0x1933E50)
#define MX_DATA_SCENARIODATA_GETBGNAME_GLOBALEXCEL_OFFSET UNITYSDK_OFFSET(0x1934090)
#define MX_DATA_SCENARIODATA_GETSCENARIOCHARACTERSHAPE_OFFSET UNITYSDK_OFFSET(0x1934200)
#define MX_DATA_SCENARIODATA_TRYGETBGNAMEEXCEL_OFFSET UNITYSDK_OFFSET(0x1934380)
#define MX_DATA_SCENARIODATA_GETCHARACTEREFFECT_OFFSET UNITYSDK_OFFSET(0x1934520)
#define MX_DATA_SCENARIODATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x1934640)
#define MX_DATA_SCENARIODATA_GETSCENARIOCHARACTERNICKNAME_OFFSET UNITYSDK_OFFSET(0x1934780)
#define MX_DATA_SCENARIODATA_GETSCENARIOCHARACTERPREFAB_OFFSET UNITYSDK_OFFSET(0x1934870)
#define MX_DATA_SCENARIODATA_GETSCENARIOCHARACTERSMALLPORTRAIT_OFFSET UNITYSDK_OFFSET(0x19348E0)
#define MX_DATA_SCENARIODATA_TRYGETEFFECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1934590)
#define MX_DATA_SCENARIODATA_TRYGETBGEFFECTEXCEL_OFFSET UNITYSDK_OFFSET(0x1934950)
#define MX_DATA_SCENARIODATA_GETCHARACTEREMOTION_OFFSET UNITYSDK_OFFSET(0x1934A00)
#define MX_DATA_SCENARIODATA_GETSCENARIOCHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x1934AF0)
#define MX_DATA_SCENARIODATA_TRYGETSCENARIOFUNNEL_OFFSET UNITYSDK_OFFSET(0x1934BE0)
#define MX_DATA_SCENARIODATA_TRYGETSCENARIOCHARACTERNAMEEXCEL_OFFSET UNITYSDK_OFFSET(0x1934230)

namespace MX::Data
{
	inline static constexpr unsigned int ScenarioData_TypeDefinitionIndex = 16336;

	class ScenarioData : public Il2CppObject
	{
	public:
		Il2CppObject* scenarioBGNameExcelCache; // 0x28
		Il2CppObject* scenarioCharacterNameExcelCache; // 0x30

		Il2CppObject* GetScenarioGroup(::System::Int64 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIODATA_GETSCENARIOGROUP_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasSituationInfo(::System::UInt32 arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIODATA_HASSITUATIONINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIODATA_.CTOR_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetScenarioScriptExcels(Il2CppObject* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIODATA_GETSCENARIOSCRIPTEXCELS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* TryGetBgEffectExcelsAll()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIODATA_TRYGETBGEFFECTEXCELSALL_OFFSET))(nullptr);
		}

		::System::Boolean TryGetTransition(::System::UInt32 arg, ::MX::Data::Excel::ScenarioTransitionExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::MX::Data::Excel::ScenarioTransitionExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIODATA_TRYGETTRANSITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetSituationInfo(::System::UInt32 arg, ScenarioCharacterSituationSet&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ScenarioCharacterSituationSet&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIODATA_TRYGETSITUATIONINFO_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetScenarioBGNameExcelsAll()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIODATA_GETSCENARIOBGNAMEEXCELSALL_OFFSET))(nullptr);
		}

		Il2CppObject* GetBGName_GlobalExcel(::System::UInt32 arg, ServerRegion* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::UInt32, ServerRegion*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIODATA_GETBGNAME_GLOBALEXCEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::FlatData::ScenarioCharacterShapes* GetScenarioCharacterShape(::System::String* str)
		{
			return (return (::FlatData::ScenarioCharacterShapes*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIODATA_GETSCENARIOCHARACTERSHAPE_OFFSET))(str, nullptr);
		}

		::System::Boolean TryGetBgNameExcel(::System::UInt32 arg, ServerRegion* arg, ::System::Boolean arg, ::MX::Data::Excel::ScenarioBGNameExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ServerRegion*, ::System::Boolean, ::MX::Data::Excel::ScenarioBGNameExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIODATA_TRYGETBGNAMEEXCEL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* GetCharacterEffect(::System::UInt32 arg)
		{
			return (return (::System::String*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIODATA_GETCHARACTEREFFECT_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIODATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		::System::String* GetScenarioCharacterNickname(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIODATA_GETSCENARIOCHARACTERNICKNAME_OFFSET))(str, nullptr);
		}

		::System::String* GetScenarioCharacterPrefab(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIODATA_GETSCENARIOCHARACTERPREFAB_OFFSET))(str, nullptr);
		}

		::System::String* GetScenarioCharacterSmallPortrait(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIODATA_GETSCENARIOCHARACTERSMALLPORTRAIT_OFFSET))(str, nullptr);
		}

		::System::Boolean TryGetEffectExcel(::System::UInt32 arg, ::MX::Data::Excel::ScenarioEffectExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::MX::Data::Excel::ScenarioEffectExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIODATA_TRYGETEFFECTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean TryGetBgEffectExcel(::System::UInt32 arg, ::MX::Data::Excel::ScenarioBGEffectExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::UInt32, ::MX::Data::Excel::ScenarioBGEffectExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIODATA_TRYGETBGEFFECTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetCharacterEmotion(::System::UInt32 arg)
		{
			return (return (::System::String*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIODATA_GETCHARACTEREMOTION_OFFSET))(arg, nullptr);
		}

		::System::String* GetScenarioCharacterName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIODATA_GETSCENARIOCHARACTERNAME_OFFSET))(str, nullptr);
		}

		::System::Boolean TryGetScenarioFunnel(::System::Int64 arg, ::System::Int64 arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::System::Int64, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIODATA_TRYGETSCENARIOFUNNEL_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean TryGetScenarioCharacterNameExcel(::System::String* str, ::MX::Data::Excel::ScenarioCharacterNameExcel&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::MX::Data::Excel::ScenarioCharacterNameExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SCENARIODATA_TRYGETSCENARIOCHARACTERNAMEEXCEL_OFFSET))(str, arg, nullptr);
		}

	};
}

