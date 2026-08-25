#pragma once
#include "unitysdk.h"

namespace MX::Controller { class CursorPoint; }

#define <>C__DISPLAYCLASS29_2_.CTOR_OFFSET UNITYSDK_OFFSET(0xC807B0)
#define <>C__DISPLAYCLASS29_2__SETCURSORPOINTINFO_B__2_OFFSET UNITYSDK_OFFSET(0xC82A20)

	inline static constexpr unsigned int <>c__DisplayClass29_2_TypeDefinitionIndex = 9060;

	class <>c__DisplayClass29_2 : public Il2CppObject
	{
	public:
		::MX::Controller::CursorPoint* point; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS29_2_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _SetCursorPointInfo_b__2(::System::String* str)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS29_2__SETCURSORPOINTINFO_B__2_OFFSET))(str, nullptr);
		}

	};

