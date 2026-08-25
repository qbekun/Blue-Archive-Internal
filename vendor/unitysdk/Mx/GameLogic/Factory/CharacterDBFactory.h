#pragma once
#include "../../../unitysdk.h"

namespace MX::GameLogic::DBModel { class CharacterDB; }
namespace MX::Data::Excel { class CharacterExcel; }
namespace MX::GameLogic::DBModel { class AssistCharacterDB; }
namespace MX::GameLogic::DBModel { class AssistRelation; }
namespace MX::GameLogic::DBModel { class WeaponDB; }
namespace MX::GameLogic::DBModel { class GearDB; }
namespace FlatData { class EchelonType; }

#define MX_GAMELOGIC_FACTORY_CHARACTERDBFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xFDE6D0)
#define MX_GAMELOGIC_FACTORY_CHARACTERDBFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xFDE8F0)
#define MX_GAMELOGIC_FACTORY_CHARACTERDBFACTORY_CREATETSS_OFFSET UNITYSDK_OFFSET(0xFDEC10)
#define MX_GAMELOGIC_FACTORY_CHARACTERDBFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xFDE960)
#define MX_GAMELOGIC_FACTORY_CHARACTERDBFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xFDED50)
#define MX_GAMELOGIC_FACTORY_CHARACTERDBFACTORY_CREATEASSIST_OFFSET UNITYSDK_OFFSET(0xFDF020)
#define MX_GAMELOGIC_FACTORY_CHARACTERDBFACTORY_CREATEASSIST_OFFSET UNITYSDK_OFFSET(0xFDF1D0)
#define MX_GAMELOGIC_FACTORY_CHARACTERDBFACTORY_TRYGETCHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0xFDE800)
#define MX_GAMELOGIC_FACTORY_CHARACTERDBFACTORY_ASSERTVALIDPRODUCTIONSTEP_OFFSET UNITYSDK_OFFSET(0xFDEF60)
#define MX_GAMELOGIC_FACTORY_CHARACTERDBFACTORY_ASSERTVALIDPRODUCTIONSTEP_OFFSET UNITYSDK_OFFSET(0xFDF360)
#define MX_GAMELOGIC_FACTORY_CHARACTERDBFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xFDF4E0)

namespace MX::GameLogic::Factory
{
	inline static constexpr unsigned int CharacterDBFactory_TypeDefinitionIndex = 12449;

	class CharacterDBFactory : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::CharacterDB* Create(::System::Int64 arg)
		{
			return ((::MX::GameLogic::DBModel::CharacterDB*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_CHARACTERDBFACTORY_CREATE_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CharacterDB* Create(::MX::Data::Excel::CharacterExcel* arg)
		{
			return ((::MX::GameLogic::DBModel::CharacterDB*(*)(::MX::Data::Excel::CharacterExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_CHARACTERDBFACTORY_CREATE_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CharacterDB* CreateTSS(::System::Int64 arg)
		{
			return ((::MX::GameLogic::DBModel::CharacterDB*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_CHARACTERDBFACTORY_CREATETSS_OFFSET))(arg, nullptr);
		}

		::MX::GameLogic::DBModel::CharacterDB* Create(::MX::Data::Excel::CharacterExcel* arg, ::System::Boolean arg2, ::System::Int32 arg3, ::System::Int32 arg4, ::System::Int32 arg5, ::System::Int32 arg6, ::System::Int32 arg7, ::System::Int32 arg8, ::System::Int32 arg9, ::System::Int32 arg10, ::System::Int32 arg11, ::System::Int32 arg12)
		{
			return ((::MX::GameLogic::DBModel::CharacterDB*(*)(::MX::Data::Excel::CharacterExcel*, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_CHARACTERDBFACTORY_CREATE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, nullptr);
		}

		::MX::GameLogic::DBModel::CharacterDB* Create(::System::Int64 arg, ::System::Int64 arg2, ::System::Int32 arg3, ::System::Int32 arg4, ::System::Int64 arg5, ::System::Int32 arg6, ::System::Int64 arg7, ::System::Int32 arg8, ::System::Int32 arg9, ::System::Int32 arg10, ::System::Int32 arg11, ::System::Int32 arg12, ::System::Boolean arg13, Il2CppObject* arg14, Il2CppObject* arg15)
		{
			return ((::MX::GameLogic::DBModel::CharacterDB*(*)(::System::Int64, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int64, ::System::Int32, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_CHARACTERDBFACTORY_CREATE_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, nullptr);
		}

		::MX::GameLogic::DBModel::AssistCharacterDB* CreateAssist(::System::Int64 arg, ::System::Int64 arg2, ::System::Int32 arg3, ::System::Int32 arg4, ::System::Int64 arg5, ::System::Int32 arg6, ::System::Int64 arg7, ::System::Int32 arg8, ::System::Int32 arg9, ::System::Int32 arg10, ::System::Int32 arg11, ::System::Int32 arg12, ::System::Int64 arg13, ::System::String* str, ::MX::GameLogic::DBModel::AssistRelation* arg14, ::MX::GameLogic::DBModel::WeaponDB* arg15, ::MX::GameLogic::DBModel::GearDB* arg16, Il2CppObject* arg17, ::FlatData::EchelonType* arg18, ::System::Int32 arg19, ::System::Int64 arg20, Il2CppObject* arg21)
		{
			return ((::MX::GameLogic::DBModel::AssistCharacterDB*(*)(::System::Int64, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int64, ::System::Int32, ::System::Int64, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int64, ::System::String*, ::MX::GameLogic::DBModel::AssistRelation*, ::MX::GameLogic::DBModel::WeaponDB*, ::MX::GameLogic::DBModel::GearDB*, Il2CppObject*, ::FlatData::EchelonType*, ::System::Int32, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_CHARACTERDBFACTORY_CREATEASSIST_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, str, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, nullptr);
		}

		::MX::GameLogic::DBModel::AssistCharacterDB* CreateAssist(::MX::GameLogic::DBModel::CharacterDB* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::String* str, ::MX::GameLogic::DBModel::AssistRelation* arg4, ::MX::GameLogic::DBModel::WeaponDB* arg5, ::MX::GameLogic::DBModel::GearDB* arg6, Il2CppObject* arg7, ::FlatData::EchelonType* arg8, ::System::Int32 arg9, ::System::Int64 arg10, Il2CppObject* arg11)
		{
			return ((::MX::GameLogic::DBModel::AssistCharacterDB*(*)(::MX::GameLogic::DBModel::CharacterDB*, ::System::Int64, ::System::Int64, ::System::String*, ::MX::GameLogic::DBModel::AssistRelation*, ::MX::GameLogic::DBModel::WeaponDB*, ::MX::GameLogic::DBModel::GearDB*, Il2CppObject*, ::FlatData::EchelonType*, ::System::Int32, ::System::Int64, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_CHARACTERDBFACTORY_CREATEASSIST_OFFSET))(arg, arg2, arg3, str, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, nullptr);
		}

		::System::Boolean TryGetCharacterExcel(::System::Int64 arg, ::MX::Data::Excel::CharacterExcel&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::MX::Data::Excel::CharacterExcel&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_CHARACTERDBFACTORY_TRYGETCHARACTEREXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AssertValidProductionStep(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_CHARACTERDBFACTORY_ASSERTVALIDPRODUCTIONSTEP_OFFSET))(arg, nullptr);
		}

		::System::Void AssertValidProductionStep(::MX::Data::Excel::CharacterExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_CHARACTERDBFACTORY_ASSERTVALIDPRODUCTIONSTEP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMELOGIC_FACTORY_CHARACTERDBFACTORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

