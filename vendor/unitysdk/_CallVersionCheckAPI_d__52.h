#pragma once
#include "unitysdk.h"

namespace Nexon::Pub { class NXPatcherEditor; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define <CALLVERSIONCHECKAPI>D__52_.CTOR_OFFSET UNITYSDK_OFFSET(0x9550C30)
#define <CALLVERSIONCHECKAPI>D__52_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x9553230)
#define <CALLVERSIONCHECKAPI>D__52_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x95532F0)
#define <CALLVERSIONCHECKAPI>D__52___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x95538F0)
#define <CALLVERSIONCHECKAPI>D__52_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x95539A0)
#define <CALLVERSIONCHECKAPI>D__52_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x95539B0)
#define <CALLVERSIONCHECKAPI>D__52_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9553A00)

	inline static constexpr unsigned int <CallVersionCheckAPI>d__52_TypeDefinitionIndex = 37439;

	class <CallVersionCheckAPI>d__52 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::Nexon::Pub::NXPatcherEditor* __4__this; // 0x20
		Il2CppObject* handler; // 0x28
		::UnityEngine::Networking::UnityWebRequest* _request_5__2; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CALLVERSIONCHECKAPI>D__52_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CALLVERSIONCHECKAPI>D__52_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CALLVERSIONCHECKAPI>D__52_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CALLVERSIONCHECKAPI>D__52___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CALLVERSIONCHECKAPI>D__52_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CALLVERSIONCHECKAPI>D__52_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CALLVERSIONCHECKAPI>D__52_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

