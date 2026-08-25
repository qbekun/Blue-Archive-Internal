#pragma once
#include "../unitysdk.h"

namespace MXPath { class Curve; }

#define MXUNDERCOVER_UCBTPATHDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xD69080)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCBTPathDescriptor_TypeDefinitionIndex = 9667;

	class UCBTPathDescriptor : public Il2CppObject
	{
	public:
		Il2CppObject* prevVertex; // 0x10
		Il2CppObject* prevEdge; // 0x18
		Il2CppObject* currentVertex; // 0x20
		Il2CppObject* nextVertex; // 0x28
		Il2CppObject* nextEdge; // 0x30
		::MXPath::Curve* nextCurve; // 0x38
		::System::Single normalizedDistance; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCBTPATHDESCRIPTOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

