#pragma once
#include "unitysdk.h"

namespace MX::Logic::Data { class HeroSetting; }
namespace MX::Logic::Data { class TeamSetting; }

#define <GETALLCHARACTER>D__103_.CTOR_OFFSET UNITYSDK_OFFSET(0x11E6660)
#define <GETALLCHARACTER>D__103_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x11E68A0)
#define <GETALLCHARACTER>D__103_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x11E69D0)
#define <GETALLCHARACTER>D__103___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x11E6FA0)
#define <GETALLCHARACTER>D__103___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x11E7050)
#define <GETALLCHARACTER>D__103_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.LOGIC.DATA.HEROSETTING_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11E7100)
#define <GETALLCHARACTER>D__103_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x11E7110)
#define <GETALLCHARACTER>D__103_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x11E7160)
#define <GETALLCHARACTER>D__103_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.LOGIC.DATA.HEROSETTING_.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x11E7170)
#define <GETALLCHARACTER>D__103_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x11E7210)

	inline static constexpr unsigned int <GetAllCharacter>d__103_TypeDefinitionIndex = 13453;

	class <GetAllCharacter>d__103 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::MX::Logic::Data::HeroSetting* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::MX::Logic::Data::TeamSetting* __4__this; // 0x28
		Il2CppObject* __7__wrap1; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETALLCHARACTER>D__103_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLCHARACTER>D__103_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLCHARACTER>D__103_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLCHARACTER>D__103___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Void __m__Finally2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLCHARACTER>D__103___M__FINALLY2_OFFSET))(nullptr);
		}

		::MX::Logic::Data::HeroSetting* System.Collections.Generic.IEnumerator_MX.Logic.Data.HeroSetting_.get_Current()
		{
			return ((::MX::Logic::Data::HeroSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLCHARACTER>D__103_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MX.LOGIC.DATA.HEROSETTING_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLCHARACTER>D__103_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLCHARACTER>D__103_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_MX.Logic.Data.HeroSetting_.GetEnumerator()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLCHARACTER>D__103_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_MX.LOGIC.DATA.HEROSETTING_.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETALLCHARACTER>D__103_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

	};

