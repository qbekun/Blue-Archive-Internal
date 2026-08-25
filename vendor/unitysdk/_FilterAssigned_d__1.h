#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class EchelonDB; }
namespace MX::GameLogic::DBModel { class CampaignMainStageSaveDB; }

#define <FILTERASSIGNED>D__1_.CTOR_OFFSET UNITYSDK_OFFSET(0xFA39C0)
#define <FILTERASSIGNED>D__1_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xFA39F0)
#define <FILTERASSIGNED>D__1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xFA3A50)
#define <FILTERASSIGNED>D__1___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xFA3D50)
#define <FILTERASSIGNED>D__1_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.GAMELOGIC.DBMODEL.ECHELONDB_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xFA3DA0)
#define <FILTERASSIGNED>D__1_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xFA3DB0)
#define <FILTERASSIGNED>D__1_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xFA3E00)
#define <FILTERASSIGNED>D__1_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.GAMELOGIC.DBMODEL.ECHELONDB_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xFA3E10)
#define <FILTERASSIGNED>D__1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xFA3EC0)

	inline static constexpr unsigned int <FilterAssigned>d__1_TypeDefinitionIndex = 12314;

	class <FilterAssigned>d__1 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::GameLogic::DBModel::EchelonDB* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::MX::GameLogic::DBModel::CampaignMainStageSaveDB* saveDataDB; // 0x28
		::MX::GameLogic::DBModel::CampaignMainStageSaveDB* __3__saveDataDB; // 0x30
		Il2CppObject* echelonDBs; // 0x38
		Il2CppObject* __3__echelonDBs; // 0x40
		Il2CppObject* __7__wrap1; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <FILTERASSIGNED>D__1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FILTERASSIGNED>D__1_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <FILTERASSIGNED>D__1_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FILTERASSIGNED>D__1___M__FINALLY1_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::EchelonDB* System.Collections.Generic.IEnumerator_MX.GameLogic.DBModel.EchelonDB_.get_Current()
		{
			return ((::MX::GameLogic::DBModel::EchelonDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + <FILTERASSIGNED>D__1_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.GAMELOGIC.DBMODEL.ECHELONDB_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <FILTERASSIGNED>D__1_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <FILTERASSIGNED>D__1_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.GameLogic.DBModel.EchelonDB_.GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <FILTERASSIGNED>D__1_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.GAMELOGIC.DBMODEL.ECHELONDB_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <FILTERASSIGNED>D__1_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

