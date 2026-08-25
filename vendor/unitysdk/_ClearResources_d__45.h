#pragma once
#include "unitysdk.h"

#define <CLEARRESOURCES>D__45_.CTOR_OFFSET UNITYSDK_OFFSET(0x144F5A0)
#define <CLEARRESOURCES>D__45_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x1451040)
#define <CLEARRESOURCES>D__45_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1451100)
#define <CLEARRESOURCES>D__45___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1451760)
#define <CLEARRESOURCES>D__45_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1451810)
#define <CLEARRESOURCES>D__45_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x1451820)
#define <CLEARRESOURCES>D__45_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1451870)

	inline static constexpr unsigned int <ClearResources>d__45_TypeDefinitionIndex = 14998;

	class <ClearResources>d__45 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		Il2CppObject* fileInfos; // 0x20
		::System::Int32 _currentCount_5__2; // 0x28
		::System::Int32 _totalCount_5__3; // 0x2C
		::System::Int32 _theFrame_5__4; // 0x30
		Il2CppObject* __7__wrap4; // 0x38
		::System::IO::FileInfo* _fileInfo_5__6; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CLEARRESOURCES>D__45_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CLEARRESOURCES>D__45_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CLEARRESOURCES>D__45_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CLEARRESOURCES>D__45___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CLEARRESOURCES>D__45_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CLEARRESOURCES>D__45_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CLEARRESOURCES>D__45_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

