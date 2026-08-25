#pragma once
#include "unitysdk.h"

namespace MX::Data::Excel { class CharacterSkillListExcel; }
namespace MX::Data { class CharacterData; }

#define <GETCHARACTERSKILLLISTDATAS>D__24_.CTOR_OFFSET UNITYSDK_OFFSET(0x188A920)
#define <GETCHARACTERSKILLLISTDATAS>D__24_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x189B280)
#define <GETCHARACTERSKILLLISTDATAS>D__24_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x189B2E0)
#define <GETCHARACTERSKILLLISTDATAS>D__24___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x189B560)
#define <GETCHARACTERSKILLLISTDATAS>D__24_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.DATA.EXCEL.CHARACTERSKILLLISTEXCEL_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x189B5B0)
#define <GETCHARACTERSKILLLISTDATAS>D__24_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x189B5C0)
#define <GETCHARACTERSKILLLISTDATAS>D__24_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x189B610)
#define <GETCHARACTERSKILLLISTDATAS>D__24_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.DATA.EXCEL.CHARACTERSKILLLISTEXCEL_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x189B660)
#define <GETCHARACTERSKILLLISTDATAS>D__24_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x189B700)

	inline static constexpr unsigned int <GetCharacterSkillListDatas>d__24_TypeDefinitionIndex = 15996;

	class <GetCharacterSkillListDatas>d__24 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::Data::Excel::CharacterSkillListExcel* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x28
		::MX::Data::CharacterData* __4__this; // 0x30
		::System::Int64 characterSkillListGroupId; // 0x38
		::System::Int64 __3__characterSkillListGroupId; // 0x40
		Il2CppObject* __7__wrap1; // 0x48

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETCHARACTERSKILLLISTDATAS>D__24_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETCHARACTERSKILLLISTDATAS>D__24_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETCHARACTERSKILLLISTDATAS>D__24_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETCHARACTERSKILLLISTDATAS>D__24___M__FINALLY1_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CharacterSkillListExcel* System.Collections.Generic.IEnumerator_MX.Data.Excel.CharacterSkillListExcel_.get_Current()
		{
			return (return (::MX::Data::Excel::CharacterSkillListExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETCHARACTERSKILLLISTDATAS>D__24_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.DATA.EXCEL.CHARACTERSKILLLISTEXCEL_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETCHARACTERSKILLLISTDATAS>D__24_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETCHARACTERSKILLLISTDATAS>D__24_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.Data.Excel.CharacterSkillListExcel_.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETCHARACTERSKILLLISTDATAS>D__24_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.DATA.EXCEL.CHARACTERSKILLLISTEXCEL_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETCHARACTERSKILLLISTDATAS>D__24_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

