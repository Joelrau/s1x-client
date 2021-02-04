#pragma once

namespace demonware
{

	class service_server
	{
	public:
		virtual std::shared_ptr<service_reply> create_reply(uint8_t type, uint32_t error = 0)
		{
			auto reply = std::make_shared<service_reply>(this, type, error);
			return reply;
		}

		virtual void send_reply(reply* data) = 0;
	};

} // namespace demonware