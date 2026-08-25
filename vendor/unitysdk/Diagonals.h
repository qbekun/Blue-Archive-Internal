#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }

#define DIAGONALS_GET_DOWNRIGHT_OFFSET UNITYSDK_OFFSET(0x4BC010)
#define DIAGONALS_GET_UPLEFT_OFFSET UNITYSDK_OFFSET(0x4BC030)
#define DIAGONALS_GET_UPRIGHT_OFFSET UNITYSDK_OFFSET(0x4BC000)
#define DIAGONALS_GET_DOWNLEFT_OFFSET UNITYSDK_OFFSET(0x4BC020)

	inline static constexpr unsigned int Diagonals_TypeDefinitionIndex = 35198;

	class Diagonals : public Il2CppObject
	{
	public:
		::System::Single OneOverSqrt2; // 0x0

		::UnityEngine::Vector2* get_DownRight()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIAGONALS_GET_DOWNRIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_UpLeft()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIAGONALS_GET_UPLEFT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_UpRight()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIAGONALS_GET_UPRIGHT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_DownLeft()
		{
			return (return (::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIAGONALS_GET_DOWNLEFT_OFFSET))(nullptr);
		}

	};

