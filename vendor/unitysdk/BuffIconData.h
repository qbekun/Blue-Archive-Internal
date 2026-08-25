#pragma once
#include "unitysdk.h"

class BuffIconContent;
class BuffIconData;

#define BUFFICONDATA_COPYFOROTHERUI_OFFSET UNITYSDK_OFFSET(0x25D6B00)
#define BUFFICONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x25D7E60)
#define BUFFICONDATA_GET_STACK_OFFSET UNITYSDK_OFFSET(0x25D4AF0)
#define BUFFICONDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x25D80C0)
#define BUFFICONDATA_GET_SHORTESTELAPSED_OFFSET UNITYSDK_OFFSET(0x25D84D0)

	inline static constexpr unsigned int BuffIconData_TypeDefinitionIndex = 6362;

	class BuffIconData : public Il2CppObject
	{
	public:
		::System::UInt32 VisualIdHash; // 0x10
		BuffIconContent* IconUI; // 0x18
		Il2CppObject* StatChangeEffects; // 0x20
		Il2CppObject* StatusResults; // 0x28
		Il2CppObject* DotAbilities; // 0x30

		BuffIconData* CopyForOtherUI()
		{
			return ((BuffIconData*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONDATA_COPYFOROTHERUI_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_Stack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONDATA_GET_STACK_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONDATA_TOSTRING_OFFSET))(nullptr);
		}

		::System::Int32 get_ShortestElapsed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFICONDATA_GET_SHORTESTELAPSED_OFFSET))(nullptr);
		}

	};

