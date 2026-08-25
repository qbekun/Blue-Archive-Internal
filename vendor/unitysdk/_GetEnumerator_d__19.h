#pragma once
#include "unitysdk.h"

#define <GETENUMERATOR>D__19_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <GETENUMERATOR>D__19_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define <GETENUMERATOR>D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <GETENUMERATOR>D__19_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MXSTUDIO.LIPSYNC.COMMONS.TIMEDVALUE_T__.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define <GETENUMERATOR>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x000000)
#define <GETENUMERATOR>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <GetEnumerator>d__19_TypeDefinitionIndex = 36897;

	class <GetEnumerator>d__19 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x0
		Il2CppObject* __2__current; // 0x0
		Il2CppObject* __4__this; // 0x0
		::System::Int32 _index_5__2; // 0x0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__19_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__19_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__19_MOVENEXT_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerator_MXStudio.LipSync.Commons.TimedValue_T__.get_Current()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__19_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_MXSTUDIO.LIPSYNC.COMMONS.TIMEDVALUE_T__.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <GETENUMERATOR>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

