#pragma once
#include "unitysdk.h"

class UITitleVideoPlay;

#define <CHECKFILEEXISTINDOWNLOADDATA>D__21_.CTOR_OFFSET UNITYSDK_OFFSET(0xCC7460)
#define <CHECKFILEEXISTINDOWNLOADDATA>D__21_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC7FF0)
#define <CHECKFILEEXISTINDOWNLOADDATA>D__21_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xCC8000)
#define <CHECKFILEEXISTINDOWNLOADDATA>D__21_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCC82F0)
#define <CHECKFILEEXISTINDOWNLOADDATA>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xCC8300)
#define <CHECKFILEEXISTINDOWNLOADDATA>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCC8350)

	inline static constexpr unsigned int <CheckFileExistInDownloadData>d__21_TypeDefinitionIndex = 9127;

	class <CheckFileExistInDownloadData>d__21 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UITitleVideoPlay* __4__this; // 0x20
		::System::String* filePath; // 0x28
		::System::String* extension; // 0x30
		Il2CppObject* FileExist; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CHECKFILEEXISTINDOWNLOADDATA>D__21_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CHECKFILEEXISTINDOWNLOADDATA>D__21_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CHECKFILEEXISTINDOWNLOADDATA>D__21_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CHECKFILEEXISTINDOWNLOADDATA>D__21_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CHECKFILEEXISTINDOWNLOADDATA>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CHECKFILEEXISTINDOWNLOADDATA>D__21_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

