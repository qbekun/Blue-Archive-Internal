#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class EchelonDB; }
class SecureLong;
namespace FlatData { class EchelonExtensionType; }
namespace MX::Data { class FixedEchelonData; }
class EchelonObject;
namespace MX::GameLogic::DBModel { class RaidTeamSettingDB; }
namespace MX::GameLogic::DBModel { class EchelonPresetDB; }

#define ECHELONOBJECT_GET_TACTICSUPPORTSERVERID_OFFSET UNITYSDK_OFFSET(0x1EE8780)
#define ECHELONOBJECT_GET_LEADERSERVERID_OFFSET UNITYSDK_OFFSET(0x1EE8790)
#define ECHELONOBJECT_GET_MAINSERVERID_OFFSET UNITYSDK_OFFSET(0x1EE87A0)
#define ECHELONOBJECT_SET_MAINSERVERID_OFFSET UNITYSDK_OFFSET(0x1EE87B0)
#define ECHELONOBJECT_GET_SUPPORTSERVERID_OFFSET UNITYSDK_OFFSET(0x1EE87C0)
#define ECHELONOBJECT_SET_SUPPORTSERVERID_OFFSET UNITYSDK_OFFSET(0x1EE87D0)
#define ECHELONOBJECT_GET_MULLIGANUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x1EE87E0)
#define ECHELONOBJECT_GET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0x1EE87F0)
#define ECHELONOBJECT_GET_ALLCHARACTERSERVERIDS_OFFSET UNITYSDK_OFFSET(0x1EE8800)
#define ECHELONOBJECT_GET_EXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1EE8A30)
#define ECHELONOBJECT_SET_EXTENSIONTYPE_OFFSET UNITYSDK_OFFSET(0x1EE8A40)
#define ECHELONOBJECT_GET_TSSINTERACTIONSERVERID_OFFSET UNITYSDK_OFFSET(0x1EE8A50)
#define ECHELONOBJECT_TRYGETTSSINTERACTIONUNIQUEIDS_OFFSET UNITYSDK_OFFSET(0x1EE8A70)
#define ECHELONOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EE4460)
#define ECHELONOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EE4BD0)
#define ECHELONOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EE50B0)
#define ECHELONOBJECT_ISFULL_OFFSET UNITYSDK_OFFSET(0x1EE8D10)
#define ECHELONOBJECT_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1EE8F20)
#define ECHELONOBJECT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EE9130)
#define ECHELONOBJECT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1EE9320)
#define ECHELONOBJECT_TOPRESETDB_OFFSET UNITYSDK_OFFSET(0x1EEA040)
#define ECHELONOBJECT_TRYGETSLOTINDEX_OFFSET UNITYSDK_OFFSET(0x1EEA5A0)

	inline static constexpr unsigned int EchelonObject_TypeDefinitionIndex = 1871;

	class EchelonObject : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::EchelonDB* DB; // 0x10
		::System::Int64 EchelonEntityId; // 0x18
		SecureLong* _TacticSupportServerId_k__BackingField; // 0x20
		SecureLong* _LeaderServerId_k__BackingField; // 0x28
		::Il2CppArray<::System::Object*>* _MainServerId_k__BackingField; // 0x30
		::Il2CppArray<::System::Object*>* _SupportServerId_k__BackingField; // 0x38
		Il2CppObject* _MulliganUniqueIds_k__BackingField; // 0x40
		::System::Int64 _FixedEchelonId_k__BackingField; // 0x48
		::FlatData::EchelonExtensionType* _ExtensionType_k__BackingField; // 0x50

		SecureLong* get_TacticSupportServerId()
		{
			return ((SecureLong*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONOBJECT_GET_TACTICSUPPORTSERVERID_OFFSET))(nullptr);
		}

		SecureLong* get_LeaderServerId()
		{
			return ((SecureLong*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONOBJECT_GET_LEADERSERVERID_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_MainServerId()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONOBJECT_GET_MAINSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_MainServerId(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONOBJECT_SET_MAINSERVERID_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_SupportServerId()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONOBJECT_GET_SUPPORTSERVERID_OFFSET))(nullptr);
		}

		::System::Void set_SupportServerId(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONOBJECT_SET_SUPPORTSERVERID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_MulliganUniqueIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONOBJECT_GET_MULLIGANUNIQUEIDS_OFFSET))(nullptr);
		}

		::System::Int64 get_FixedEchelonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONOBJECT_GET_FIXEDECHELONID_OFFSET))(nullptr);
		}

		Il2CppObject* get_AllCharacterServerIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONOBJECT_GET_ALLCHARACTERSERVERIDS_OFFSET))(nullptr);
		}

		::FlatData::EchelonExtensionType* get_ExtensionType()
		{
			return ((::FlatData::EchelonExtensionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONOBJECT_GET_EXTENSIONTYPE_OFFSET))(nullptr);
		}

		::System::Void set_ExtensionType(::FlatData::EchelonExtensionType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONOBJECT_SET_EXTENSIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TSSInteractionServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONOBJECT_GET_TSSINTERACTIONSERVERID_OFFSET))(nullptr);
		}

		::System::Boolean TryGetTssInteractionUniqueIds(int64_t&* arg, int64_t&* arg2)
		{
			return ((::System::Boolean(*)(int64_t&*, int64_t&*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONOBJECT_TRYGETTSSINTERACTIONUNIQUEIDS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor(::FlatData::EchelonExtensionType* arg)
		{
			((::System::Void(*)(::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONOBJECT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::GameLogic::DBModel::EchelonDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::EchelonDB*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONOBJECT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::Data::FixedEchelonData* arg)
		{
			((::System::Void(*)(::MX::Data::FixedEchelonData*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONOBJECT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONOBJECT_ISFULL_OFFSET))(nullptr);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONOBJECT_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Boolean Equals(EchelonObject* arg)
		{
			return ((::System::Boolean(*)(EchelonObject*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONOBJECT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::MX::GameLogic::DBModel::RaidTeamSettingDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::RaidTeamSettingDB*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONOBJECT_UPDATE_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::EchelonPresetDB* ToPresetDB(::System::Int32 arg, ::FlatData::EchelonExtensionType* arg2)
		{
			return ((::MX::GameLogic::DBModel::EchelonPresetDB*(*)(::System::Int32, ::FlatData::EchelonExtensionType*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONOBJECT_TOPRESETDB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetSlotIndex(::System::Int64 arg, int32_t&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONOBJECT_TRYGETSLOTINDEX_OFFSET))(arg, arg2, nullptr);
		}

	};

