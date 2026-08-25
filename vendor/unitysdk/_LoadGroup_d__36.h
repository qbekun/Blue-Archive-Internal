#pragma once
#include "unitysdk.h"

namespace MX::MinigameShooting { class GroupInfo; }
namespace MX::MinigameShooting { class Section; }
class <>c__DisplayClass36_0;

#define <LOADGROUP>D__36_.CTOR_OFFSET UNITYSDK_OFFSET(0x1472550)
#define <LOADGROUP>D__36_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1472E30)
#define <LOADGROUP>D__36_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1472E40)
#define <LOADGROUP>D__36_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1473BF0)
#define <LOADGROUP>D__36_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1473C00)
#define <LOADGROUP>D__36_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1473C50)

	inline static constexpr unsigned int <LoadGroup>d__36_TypeDefinitionIndex = 15132;

	class <LoadGroup>d__36 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MX::MinigameShooting::GroupInfo* groupInfo; // 0x20
		::MX::MinigameShooting::Section* __4__this; // 0x28
		<>c__DisplayClass36_0* __8__1; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <LOADGROUP>D__36_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADGROUP>D__36_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADGROUP>D__36_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADGROUP>D__36_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADGROUP>D__36_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <LOADGROUP>D__36_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

