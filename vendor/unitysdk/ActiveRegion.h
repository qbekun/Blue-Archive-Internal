#pragma once
#include "unitysdk.h"

#define ACTIVEREGION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA098150)

	inline static constexpr unsigned int ActiveRegion_TypeDefinitionIndex = 32837;

	class ActiveRegion : public Il2CppObject
	{
	public:
		Edge* _eUp; // 0x10
		Il2CppObject* _nodeUp; // 0x18
		::System::Int32 _windingNumber; // 0x20
		::System::Boolean _inside; // 0x24
		::System::Boolean _sentinel; // 0x25
		::System::Boolean _dirty; // 0x26
		::System::Boolean _fixUpperEdge; // 0x27

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIVEREGION_.CTOR_OFFSET))(nullptr);
		}

	};

