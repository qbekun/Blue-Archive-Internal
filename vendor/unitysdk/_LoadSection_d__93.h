#pragma once
#include "unitysdk.h"

namespace MX::MinigameShooting { class MGSManager; }
namespace MX::MinigameShooting { class Section; }

#define <LOADSECTION>D__93_.CTOR_OFFSET UNITYSDK_OFFSET(0x1478870)
#define <LOADSECTION>D__93_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x147BD50)
#define <LOADSECTION>D__93_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x147BD60)
#define <LOADSECTION>D__93_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x147C1B0)
#define <LOADSECTION>D__93_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x147C1C0)
#define <LOADSECTION>D__93_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x147C210)

	inline static constexpr unsigned int <LoadSection>d__93_TypeDefinitionIndex = 15160;

	class <LoadSection>d__93 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::MinigameShooting::MGSManager* __4__this; // 0x20
		::System::Int32 index; // 0x28
		::System::Action* onLoaded; // 0x30
		::MX::MinigameShooting::Section* _section_5__2; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <LOADSECTION>D__93_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADSECTION>D__93_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADSECTION>D__93_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADSECTION>D__93_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADSECTION>D__93_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADSECTION>D__93_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

