#pragma once
#include "unitysdk.h"

class CameraFindType;

	inline static constexpr unsigned int CameraFindType_TypeDefinitionIndex = 3728;

	class CameraFindType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		CameraFindType* None; // 0x0
		CameraFindType* MainCameraTag; // 0x0
		CameraFindType* FxCameraTag; // 0x0
		CameraFindType* Parent; // 0x0
		CameraFindType* Child; // 0x0
		CameraFindType* GameMain; // 0x0
		CameraFindType* Current; // 0x0
		CameraFindType* UICamera; // 0x0

	};

