#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace FlatData { class TimeAttackDungeonRewardType; }
namespace MX::Data { class TimeAttackDungeonData; }
namespace MX::Data { class TimeAttackDungeonRewardInfo; }

#define <GETREWARDSFROMTOTALPOINTSUM>D__26_.CTOR_OFFSET UNITYSDK_OFFSET(0x1962DE0)
#define <GETREWARDSFROMTOTALPOINTSUM>D__26_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1963330)
#define <GETREWARDSFROMTOTALPOINTSUM>D__26_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19633F0)
#define <GETREWARDSFROMTOTALPOINTSUM>D__26___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x19639D0)
#define <GETREWARDSFROMTOTALPOINTSUM>D__26_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.GAMELOGIC.PARCEL.PARCELINFO_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1963A80)
#define <GETREWARDSFROMTOTALPOINTSUM>D__26_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1963A90)
#define <GETREWARDSFROMTOTALPOINTSUM>D__26_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1963AE0)
#define <GETREWARDSFROMTOTALPOINTSUM>D__26_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.GAMELOGIC.PARCEL.PARCELINFO_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1963AF0)
#define <GETREWARDSFROMTOTALPOINTSUM>D__26_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1963BA0)

	inline static constexpr unsigned int <GetRewardsFromTotalPointSum>d__26_TypeDefinitionIndex = 16426;

	class <GetRewardsFromTotalPointSum>d__26 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::GameLogic::Parcel::ParcelInfo* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::System::Int64 totalPointSum; // 0x28
		::System::Int64 __3__totalPointSum; // 0x30
		::FlatData::TimeAttackDungeonRewardType* rewardType; // 0x38
		::FlatData::TimeAttackDungeonRewardType* __3__rewardType; // 0x3C
		::MX::Data::TimeAttackDungeonData* __4__this; // 0x40
		::System::Int64 seasonId; // 0x48
		::System::Int64 __3__seasonId; // 0x50
		<>c__DisplayClass26_0* __8__1; // 0x58
		::MX::Data::TimeAttackDungeonRewardInfo* _rewardInfo_5__2; // 0x60
		Il2CppObject* __7__wrap2; // 0x68

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETREWARDSFROMTOTALPOINTSUM>D__26_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETREWARDSFROMTOTALPOINTSUM>D__26_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETREWARDSFROMTOTALPOINTSUM>D__26_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETREWARDSFROMTOTALPOINTSUM>D__26___M__FINALLY1_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* System.Collections.Generic.IEnumerator_MX.GameLogic.Parcel.ParcelInfo_.get_Current()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETREWARDSFROMTOTALPOINTSUM>D__26_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.GAMELOGIC.PARCEL.PARCELINFO_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETREWARDSFROMTOTALPOINTSUM>D__26_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETREWARDSFROMTOTALPOINTSUM>D__26_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.GameLogic.Parcel.ParcelInfo_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETREWARDSFROMTOTALPOINTSUM>D__26_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.GAMELOGIC.PARCEL.PARCELINFO_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETREWARDSFROMTOTALPOINTSUM>D__26_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

