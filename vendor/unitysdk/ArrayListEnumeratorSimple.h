#pragma once
#include "unitysdk.h"

#define ARRAYLISTENUMERATORSIMPLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92D2DF0)
#define ARRAYLISTENUMERATORSIMPLE_CLONE_OFFSET UNITYSDK_OFFSET(0x92D62C0)
#define ARRAYLISTENUMERATORSIMPLE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x92D62D0)
#define ARRAYLISTENUMERATORSIMPLE_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x92D64A0)
#define ARRAYLISTENUMERATORSIMPLE_RESET_OFFSET UNITYSDK_OFFSET(0x92D6580)
#define ARRAYLISTENUMERATORSIMPLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x92D6650)

	inline static constexpr unsigned int ArrayListEnumeratorSimple_TypeDefinitionIndex = 25088;

	class ArrayListEnumeratorSimple : public Il2CppObject
	{
	public:
		::System::Collections::ArrayList* _list; // 0x10
		::System::Int32 _index; // 0x18
		::System::Int32 _version; // 0x1C
		::System::Object* _currentElement; // 0x20
		::System::Boolean _isArrayList; // 0x28
		::System::Object* s_dummyObject; // 0x0

		::System::Void .ctor(::System::Collections::ArrayList* arg)
		{
			((::System::Void(*)(::System::Collections::ArrayList*, ::PVOID))((::PBYTE)hIl2Cpp + ARRAYLISTENUMERATORSIMPLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARRAYLISTENUMERATORSIMPLE_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ARRAYLISTENUMERATORSIMPLE_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARRAYLISTENUMERATORSIMPLE_GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARRAYLISTENUMERATORSIMPLE_RESET_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARRAYLISTENUMERATORSIMPLE_.CCTOR_OFFSET))(nullptr);
		}

	};

