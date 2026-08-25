#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class CostumeExcel; }
namespace MX::Logic::Battles { class CharacterGroup; }

#define <GETALLCOSTUMEDATA>D__184_.CTOR_OFFSET UNITYSDK_OFFSET(0x1396E70)
#define <GETALLCOSTUMEDATA>D__184_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1397DA0)
#define <GETALLCOSTUMEDATA>D__184_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1397E50)
#define <GETALLCOSTUMEDATA>D__184___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x13981C0)
#define <GETALLCOSTUMEDATA>D__184___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1398210)
#define <GETALLCOSTUMEDATA>D__184_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.DATA.EXCEL.COSTUMEEXCEL_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1398260)
#define <GETALLCOSTUMEDATA>D__184_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1398270)
#define <GETALLCOSTUMEDATA>D__184_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13982C0)
#define <GETALLCOSTUMEDATA>D__184_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.DATA.EXCEL.COSTUMEEXCEL_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1398310)
#define <GETALLCOSTUMEDATA>D__184_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x13983B0)

	inline static constexpr unsigned int <GetAllCostumeData>d__184_TypeDefinitionIndex = 14430;

	class <GetAllCostumeData>d__184 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::Data::Excel::CostumeExcel* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x28
		::MX::Logic::Battles::CharacterGroup* __4__this; // 0x30
		Il2CppObject* __7__wrap1; // 0x38
		Il2CppObject* __7__wrap2; // 0x50

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETALLCOSTUMEDATA>D__184_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLCOSTUMEDATA>D__184_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLCOSTUMEDATA>D__184_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLCOSTUMEDATA>D__184___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Void __m__Finally2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLCOSTUMEDATA>D__184___M__FINALLY2_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CostumeExcel* System.Collections.Generic.IEnumerator_MX.Data.Excel.CostumeExcel_.get_Current()
		{
			return ((::MX::Data::Excel::CostumeExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLCOSTUMEDATA>D__184_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.DATA.EXCEL.COSTUMEEXCEL_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLCOSTUMEDATA>D__184_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLCOSTUMEDATA>D__184_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.Data.Excel.CostumeExcel_.GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLCOSTUMEDATA>D__184_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.DATA.EXCEL.COSTUMEEXCEL_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLCOSTUMEDATA>D__184_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

