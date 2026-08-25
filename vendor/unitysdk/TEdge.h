#pragma once
#include "unitysdk.h"

#define TEDGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x286DB10)

	inline static constexpr unsigned int TEdge_TypeDefinitionIndex = 34385;

	class TEdge : public Il2CppObject
	{
	public:
		IntPoint* Bot; // 0x10
		IntPoint* Curr; // 0x20
		IntPoint* Top; // 0x30
		IntPoint* Delta; // 0x40
		::System::Double Dx; // 0x50
		PolyType* PolyTyp; // 0x58
		EdgeSide* Side; // 0x5C
		::System::Int32 WindDelta; // 0x60
		::System::Int32 WindCnt; // 0x64
		::System::Int32 WindCnt2; // 0x68
		::System::Int32 OutIdx; // 0x6C
		TEdge* Next; // 0x70
		TEdge* Prev; // 0x78
		TEdge* NextInLML; // 0x80
		TEdge* NextInAEL; // 0x88
		TEdge* PrevInAEL; // 0x90
		TEdge* NextInSEL; // 0x98
		TEdge* PrevInSEL; // 0xA0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEDGE_.CTOR_OFFSET))(nullptr);
		}

	};

