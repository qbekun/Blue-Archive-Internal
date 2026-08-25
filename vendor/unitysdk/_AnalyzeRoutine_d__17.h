#pragma once
#include "unitysdk.h"

namespace E7::Native { class NativeAudioAnalyzer; }

#define <ANALYZEROUTINE>D__17_.CTOR_OFFSET UNITYSDK_OFFSET(0x289FA20)
#define <ANALYZEROUTINE>D__17_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x289FAD0)
#define <ANALYZEROUTINE>D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x289FAE0)
#define <ANALYZEROUTINE>D__17_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x289FEF0)
#define <ANALYZEROUTINE>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x289FF00)
#define <ANALYZEROUTINE>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x289FF50)

	inline static constexpr unsigned int <AnalyzeRoutine>d__17_TypeDefinitionIndex = 37981;

	class <AnalyzeRoutine>d__17 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::E7::Native::NativeAudioAnalyzer* __4__this; // 0x20
		::System::Int32 _i_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <ANALYZEROUTINE>D__17_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANALYZEROUTINE>D__17_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANALYZEROUTINE>D__17_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANALYZEROUTINE>D__17_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANALYZEROUTINE>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ANALYZEROUTINE>D__17_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

