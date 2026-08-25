#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class CostumeExcel; }
namespace MX::Data { class CharacterData; }

#define <GETALLCOSTUMEEXCEL>D__29_.CTOR_OFFSET UNITYSDK_OFFSET(0x188AE90)
#define <GETALLCOSTUMEEXCEL>D__29_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x189B710)
#define <GETALLCOSTUMEEXCEL>D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x189B770)
#define <GETALLCOSTUMEEXCEL>D__29___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x189B9D0)
#define <GETALLCOSTUMEEXCEL>D__29_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.DATA.EXCEL.COSTUMEEXCEL_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x189BA20)
#define <GETALLCOSTUMEEXCEL>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x189BA30)
#define <GETALLCOSTUMEEXCEL>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x189BA80)
#define <GETALLCOSTUMEEXCEL>D__29_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.DATA.EXCEL.COSTUMEEXCEL_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x189BAD0)
#define <GETALLCOSTUMEEXCEL>D__29_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x189BB70)

	inline static constexpr unsigned int <GetAllCostumeExcel>d__29_TypeDefinitionIndex = 15997;

	class <GetAllCostumeExcel>d__29 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::Data::Excel::CostumeExcel* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x28
		::MX::Data::CharacterData* __4__this; // 0x30
		Il2CppObject* __7__wrap1; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETALLCOSTUMEEXCEL>D__29_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLCOSTUMEEXCEL>D__29_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLCOSTUMEEXCEL>D__29_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLCOSTUMEEXCEL>D__29___M__FINALLY1_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CostumeExcel* System.Collections.Generic.IEnumerator_MX.Data.Excel.CostumeExcel_.get_Current()
		{
			return (return (::MX::Data::Excel::CostumeExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLCOSTUMEEXCEL>D__29_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.DATA.EXCEL.COSTUMEEXCEL_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLCOSTUMEEXCEL>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLCOSTUMEEXCEL>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.Data.Excel.CostumeExcel_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLCOSTUMEEXCEL>D__29_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.DATA.EXCEL.COSTUMEEXCEL_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLCOSTUMEEXCEL>D__29_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

