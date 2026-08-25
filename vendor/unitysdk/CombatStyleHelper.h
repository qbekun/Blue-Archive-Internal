#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class EchelonPresetDB; }
namespace MX::GameLogic::DBModel { class EchelonDB; }
namespace FlatData { class EchelonExtensionType; }
class EchelonObject;
namespace MX::Data::Excel { class CostumeExcel; }

#define COMBATSTYLEHELPER_GETCOMBATSTYLECHARACTERIDORREP_OFFSET UNITYSDK_OFFSET(0x10BDE60)
#define COMBATSTYLEHELPER_GETCOMBATSTYLECOSTUMEID_OFFSET UNITYSDK_OFFSET(0x10BDF50)
#define COMBATSTYLEHELPER_APPLYSTYLES_OFFSET UNITYSDK_OFFSET(0x10BE0B0)
#define COMBATSTYLEHELPER_APPLYSTYLES_OFFSET UNITYSDK_OFFSET(0x10BE3E0)
#define COMBATSTYLEHELPER_APPLYSTYLESBYCHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0x10BE420)
#define COMBATSTYLEHELPER_APPLYSTYLESBYCHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x10BE0F0)
#define COMBATSTYLEHELPER_GETSTYLEINDICESDEFAULT_OFFSET UNITYSDK_OFFSET(0x10BEB20)
#define COMBATSTYLEHELPER_PRELOADSPINERESOURCESOFEACHSTYLE_OFFSET UNITYSDK_OFFSET(0x10BEBE0)
#define COMBATSTYLEHELPER_GENERATEMULLIGANCHARACTERIDLIST_OFFSET UNITYSDK_OFFSET(0x10BEF90)
#define COMBATSTYLEHELPER__PRELOADSPINERESOURCESOFEACHSTYLE_G__LOADREPRESENTATIVE|7_0_OFFSET UNITYSDK_OFFSET(0x10BEDB0)
#define COMBATSTYLEHELPER__PRELOADSPINERESOURCESOFEACHSTYLE_G__LOADASYNC|7_1_OFFSET UNITYSDK_OFFSET(0x10BEEF0)

	inline static constexpr unsigned int CombatStyleHelper_TypeDefinitionIndex = 935;

	class CombatStyleHelper : public Il2CppObject
	{
	public:
		::System::Int64 GetCombatStyleCharacterIdOrRep(::System::Int64 arg, ::System::Int32 arg2)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLEHELPER_GETCOMBATSTYLECHARACTERIDORREP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 GetCombatStyleCostumeId(::System::Int64 arg, ::System::Int64 arg2, ::System::Int32 arg3)
		{
			return ((::System::Int64(*)(::System::Int64, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLEHELPER_GETCOMBATSTYLECOSTUMEID_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void ApplyStyles(::MX::GameLogic::DBModel::EchelonPresetDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EchelonPresetDB*, ::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLEHELPER_APPLYSTYLES_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyStyles(::MX::GameLogic::DBModel::EchelonDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EchelonDB*, ::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLEHELPER_APPLYSTYLES_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyStylesByCharacterServerId(Il2CppObject* arg, Il2CppObject* arg2, ::Il2CppArray<::System::Object*>* arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLEHELPER_APPLYSTYLESBYCHARACTERSERVERID_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void ApplyStylesByCharacterUniqueId(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg2, ::Il2CppArray<::System::Object*>* arg3, ::System::Int32 arg4)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLEHELPER_APPLYSTYLESBYCHARACTERUNIQUEID_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetStyleIndicesDefault(::FlatData::EchelonExtensionType* arg)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLEHELPER_GETSTYLEINDICESDEFAULT_OFFSET))(arg, nullptr);
		}

		::System::Void PreloadSpineResourcesOfEachStyle(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLEHELPER_PRELOADSPINERESOURCESOFEACHSTYLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GenerateMulliganCharacterIdList(EchelonObject* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(EchelonObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLEHELPER_GENERATEMULLIGANCHARACTERIDLIST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _PreloadSpineResourcesOfEachStyle_g__LoadRepresentative|7_0(<>c__DisplayClass7_0&* arg)
		{
			((::System::Void(*)(<>c__DisplayClass7_0&*, ::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLEHELPER__PRELOADSPINERESOURCESOFEACHSTYLE_G__LOADREPRESENTATIVE|7_0_OFFSET))(arg, nullptr);
		}

		::System::Void _PreloadSpineResourcesOfEachStyle_g__LoadAsync|7_1(::MX::Data::Excel::CostumeExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CostumeExcel*, ::PVOID))((::PBYTE)hIl2Cpp + COMBATSTYLEHELPER__PRELOADSPINERESOURCESOFEACHSTYLE_G__LOADASYNC|7_1_OFFSET))(arg, nullptr);
		}

	};

