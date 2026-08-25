#pragma once
#include "unitysdk.h"

#define TREASUREUIOPENER_ISCONTENTSLOCK_OFFSET UNITYSDK_OFFSET(0x26C3FE0)
#define TREASUREUIOPENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C3FF0)
#define TREASUREUIOPENER_OPENUI_OFFSET UNITYSDK_OFFSET(0x26C4000)

	inline static constexpr unsigned int TreasureUIOpener_TypeDefinitionIndex = 6964;

	class TreasureUIOpener : public Il2CppObject
	{
	public:
		::System::Boolean IsContentsLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TREASUREUIOPENER_ISCONTENTSLOCK_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TREASUREUIOPENER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void OpenUI()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TREASUREUIOPENER_OPENUI_OFFSET))(nullptr);
		}

	};

