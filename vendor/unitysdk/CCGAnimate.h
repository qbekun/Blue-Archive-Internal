#pragma once
#include "unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }
class CCGVisualCard;

#define CCGANIMATE_MOVEANDROTATE_OFFSET UNITYSDK_OFFSET(0xA53AA0)
#define CCGANIMATE_ROTATION_OFFSET UNITYSDK_OFFSET(0xA53CB0)
#define CCGANIMATE_CARDACTIONANIMATEBEZIER_OFFSET UNITYSDK_OFFSET(0xA53E80)
#define CCGANIMATE_FLIPCARD_OFFSET UNITYSDK_OFFSET(0xA54070)
#define CCGANIMATE_MOVETOPOSITIONBEZIER_OFFSET UNITYSDK_OFFSET(0xA54230)
#define CCGANIMATE_DESTORYCARD_OFFSET UNITYSDK_OFFSET(0xA54430)
#define CCGANIMATE_MOVETOPOSITION_OFFSET UNITYSDK_OFFSET(0xA545B0)
#define CCGANIMATE_MOVETOGRAVEYARD_OFFSET UNITYSDK_OFFSET(0xA54790)

	inline static constexpr unsigned int CCGAnimate_TypeDefinitionIndex = 492;

	class CCGAnimate : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* MoveAndRotate(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg2, ::UnityEngine::Quaternion* arg3, ::System::Single arg4, ::System::Threading::CancellationToken* arg5)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::System::Single, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CCGANIMATE_MOVEANDROTATE_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Rotation(::UnityEngine::Transform* arg, ::UnityEngine::Quaternion* arg2, ::System::Single arg3, ::System::Threading::CancellationToken* arg4)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::UnityEngine::Transform*, ::UnityEngine::Quaternion*, ::System::Single, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CCGANIMATE_ROTATION_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* CardActionAnimateBezier(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg2, ::UnityEngine::Quaternion* arg3, ::System::Threading::CancellationToken* arg4, ::System::Single arg5)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::System::Threading::CancellationToken*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CCGANIMATE_CARDACTIONANIMATEBEZIER_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* FlipCard(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg2, ::System::Threading::CancellationToken* arg3, ::System::Boolean arg4)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::System::Threading::CancellationToken*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CCGANIMATE_FLIPCARD_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* MoveToPositionBezier(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg2, ::UnityEngine::Vector3* arg3, ::System::Single arg4, ::System::Threading::CancellationToken* arg5)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::UnityEngine::Vector3*, ::System::Single, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CCGANIMATE_MOVETOPOSITIONBEZIER_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* DestoryCard(CCGVisualCard* arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(CCGVisualCard*, ::PVOID))((::PBYTE)hIl2Cpp + CCGANIMATE_DESTORYCARD_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* MoveToPosition(::UnityEngine::Transform* arg, ::UnityEngine::Vector3* arg2, ::System::Threading::CancellationToken* arg3, ::System::Single arg4)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::System::Threading::CancellationToken*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CCGANIMATE_MOVETOPOSITION_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* MoveToGraveyard(::UnityEngine::Transform* arg, ::System::Threading::CancellationToken* arg2)
		{
			return ((::Cysharp::Threading::Tasks::UniTask*(*)(::UnityEngine::Transform*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CCGANIMATE_MOVETOGRAVEYARD_OFFSET))(arg, arg2, nullptr);
		}

	};

