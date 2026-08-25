#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class EquipmentDB; }
class EquipmentInventoryObject;

#define <GETEQUIPMENTDBS>D__20_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E44BE0)
#define <GETEQUIPMENTDBS>D__20_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E45C20)
#define <GETEQUIPMENTDBS>D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E45CE0)
#define <GETEQUIPMENTDBS>D__20___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1E46090)
#define <GETEQUIPMENTDBS>D__20_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.GAMELOGIC.DBMODEL.EQUIPMENTDB_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E46140)
#define <GETEQUIPMENTDBS>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1E46150)
#define <GETEQUIPMENTDBS>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E461A0)
#define <GETEQUIPMENTDBS>D__20_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.GAMELOGIC.DBMODEL.EQUIPMENTDB_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E461B0)
#define <GETEQUIPMENTDBS>D__20_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E46260)

	inline static constexpr unsigned int <GetEquipmentDBs>d__20_TypeDefinitionIndex = 1679;

	class <GetEquipmentDBs>d__20 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::GameLogic::DBModel::EquipmentDB* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		Il2CppObject* equipmentServerIds; // 0x28
		Il2CppObject* __3__equipmentServerIds; // 0x30
		EquipmentInventoryObject* __4__this; // 0x38
		Il2CppObject* __7__wrap1; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETEQUIPMENTDBS>D__20_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETEQUIPMENTDBS>D__20_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETEQUIPMENTDBS>D__20_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETEQUIPMENTDBS>D__20___M__FINALLY1_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EquipmentDB* System.Collections.Generic.IEnumerator_MX.GameLogic.DBModel.EquipmentDB_.get_Current()
		{
			return ((::MX::GameLogic::DBModel::EquipmentDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETEQUIPMENTDBS>D__20_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.GAMELOGIC.DBMODEL.EQUIPMENTDB_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETEQUIPMENTDBS>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETEQUIPMENTDBS>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.GameLogic.DBModel.EquipmentDB_.GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETEQUIPMENTDBS>D__20_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.GAMELOGIC.DBMODEL.EQUIPMENTDB_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETEQUIPMENTDBS>D__20_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

