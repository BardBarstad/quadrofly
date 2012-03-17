/**
 * Quadrofly Software (http://quadrofly.ni-c.de)
 *
 * @file 	main.h
 * @brief 	Global header file.
 * @author 	Willi Thiel (wthiel@quadrofly.ni-c.de)
 * @date 	Mar 6, 2012
 */
#ifndef MAIN_H_
#define MAIN_H_

#ifndef F_CPU
#define F_CPU 20000000UL /*!< Set CPU clock */
#endif

#define SIMULAVR_AVAILABLE /*!< Compile for the simulavr simulator */

#define UART_AVAILABLE /*!< Is UART available */
#define BAUD 57600UL /*!< UART Baudrate in bit per second */

#define RFM12B_AVAILABLE /*!< Is RFM12B available */
#define SNAP_AVAILABLE /*!< Is Snap protocol available */

#define MOTOR_AVAILABLE /*!< Is Motor control available */

/* Dependencies */
#ifdef SIMULAVR_AVAILABLE
#undef UART_AVAILABLE /*!< UART doesn't work if the software runs on simulavr, deactivate it */
#endif /* SIMULAVR_AVAILABLE */

#ifdef SNAP_AVAILABLE
#define SNAP_STATIC_ADDR	0x0001
#endif

#endif
