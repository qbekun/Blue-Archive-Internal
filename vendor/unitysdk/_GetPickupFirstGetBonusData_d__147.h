#pragma once
#include "unitysdk.h"

namespace MX::Data { class PickupFirstGetBonusExcelData; }
namespace MX::Data { class ShopData; }

#define <GETPICKUPFIRSTGETBONUSDATA>D__147_.CTOR_OFFSET UNITYSDK_OFFSET(0x1956C30)
#define <GETPICKUPFIRSTGETBONUSDATA>D__147_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1959660)
#define <GETPICKUPFIRSTGETBONUSDATA>D__147_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1959720)
#define <GETPICKUPFIRSTGETBONUSDATA>D__147___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1959B40)
#define <GETPICKUPFIRSTGETBONUSDATA>D__147_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.DATA.PICKUPFIRSTGETBONUSEXCELDATA_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1959BF0)
#define <GETPICKUPFIRSTGETBONUSDATA>D__147_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1959C00)
#define <GETPICKUPFIRSTGETBONUSDATA>D__147_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1959C50)
#define <GETPICKUPFIRSTGETBONUSDATA>D__147_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.DATA.PICKUPFIRSTGETBONUSEXCELDATA_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1959C60)
#define <GETPICKUPFIRSTGETBONUSDATA>D__147_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1959D10)

	inline static constexpr unsigned int <GetPickupFirstGetBonusData>d__147_TypeDefinitionIndex = 16396;

	class <GetPickupFirstGetBonusData>d__147 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::Data::PickupFirstGetBonusExcelData* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		Il2CppObject* shopRecruitIds; // 0x28
		Il2CppObject* __3__shopRecruitIds; // 0x30
		::MX::Data::ShopData* __4__this; // 0x38
		Il2CppObject* __7__wrap1; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETPICKUPFIRSTGETBONUSDATA>D__147_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETPICKUPFIRSTGETBONUSDATA>D__147_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETPICKUPFIRSTGETBONUSDATA>D__147_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETPICKUPFIRSTGETBONUSDATA>D__147___M__FINALLY1_OFFSET))(nullptr);
		}

		::MX::Data::PickupFirstGetBonusExcelData* System.Collections.Generic.IEnumerator_MX.Data.PickupFirstGetBonusExcelData_.get_Current()
		{
			return (return (::MX::Data::PickupFirstGetBonusExcelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETPICKUPFIRSTGETBONUSDATA>D__147_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.DATA.PICKUPFIRSTGETBONUSEXCELDATA_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETPICKUPFIRSTGETBONUSDATA>D__147_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETPICKUPFIRSTGETBONUSDATA>D__147_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.Data.PickupFirstGetBonusExcelData_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETPICKUPFIRSTGETBONUSDATA>D__147_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.DATA.PICKUPFIRSTGETBONUSEXCELDATA_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETPICKUPFIRSTGETBONUSDATA>D__147_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

