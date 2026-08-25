#pragma once
#include "unitysdk.h"

class UIPatchDownload;
namespace MX::Core::Diagnostics { class SectionProfiler; }

#define <STARTBGM>D__44_.CTOR_OFFSET UNITYSDK_OFFSET(0xCC5400)
#define <STARTBGM>D__44_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC5420)
#define <STARTBGM>D__44_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xCC54E0)
#define <STARTBGM>D__44___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xCC57C0)
#define <STARTBGM>D__44_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCC5870)
#define <STARTBGM>D__44_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xCC5880)
#define <STARTBGM>D__44_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCC58D0)

	inline static constexpr unsigned int <StartBGM>d__44_TypeDefinitionIndex = 9116;

	class <StartBGM>d__44 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIPatchDownload* __4__this; // 0x20
		::MX::Core::Diagnostics::SectionProfiler* _profiler_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <STARTBGM>D__44_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <STARTBGM>D__44_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <STARTBGM>D__44_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <STARTBGM>D__44___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <STARTBGM>D__44_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <STARTBGM>D__44_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <STARTBGM>D__44_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

