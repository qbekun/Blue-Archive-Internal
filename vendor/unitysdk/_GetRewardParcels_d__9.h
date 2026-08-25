#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::Data::Excel { class MultiFloorRaidStageExcel; }

#define <GETREWARDPARCELS>D__9_.CTOR_OFFSET UNITYSDK_OFFSET(0x197B8D0)
#define <GETREWARDPARCELS>D__9_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x197BBC0)
#define <GETREWARDPARCELS>D__9_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x197BC20)
#define <GETREWARDPARCELS>D__9___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x197BEC0)
#define <GETREWARDPARCELS>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.GAMELOGIC.PARCEL.PARCELINFO_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x197BF10)
#define <GETREWARDPARCELS>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x197BF20)
#define <GETREWARDPARCELS>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x197BF70)
#define <GETREWARDPARCELS>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.GAMELOGIC.PARCEL.PARCELINFO_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x197BF80)
#define <GETREWARDPARCELS>D__9_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x197C020)

	inline static constexpr unsigned int <GetRewardParcels>d__9_TypeDefinitionIndex = 16504;

	class <GetRewardParcels>d__9 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::GameLogic::Parcel::ParcelInfo* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::MX::Data::Excel::MultiFloorRaidStageExcel* stageExcel; // 0x28
		::MX::Data::Excel::MultiFloorRaidStageExcel* __3__stageExcel; // 0x38
		Il2CppObject* __7__wrap1; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETREWARDPARCELS>D__9_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETREWARDPARCELS>D__9_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETREWARDPARCELS>D__9_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETREWARDPARCELS>D__9___M__FINALLY1_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelInfo* System.Collections.Generic.IEnumerator_MX.GameLogic.Parcel.ParcelInfo_.get_Current()
		{
			return (return (::MX::GameLogic::Parcel::ParcelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETREWARDPARCELS>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.GAMELOGIC.PARCEL.PARCELINFO_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETREWARDPARCELS>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETREWARDPARCELS>D__9_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.GameLogic.Parcel.ParcelInfo_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETREWARDPARCELS>D__9_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.GAMELOGIC.PARCEL.PARCELINFO_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETREWARDPARCELS>D__9_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

